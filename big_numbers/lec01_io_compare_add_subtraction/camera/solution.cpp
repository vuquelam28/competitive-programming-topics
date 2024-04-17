#include<bits/stdc++.h>
#define int long long

using namespace std;

typedef vector < int > vi;

ostream &operator<<(ostream &cout, const vi &a) {
   	for (auto u : a) cout << u;
   	return cout;
} 
istream &operator >> (istream &cin, vi &a) {
   	string s; cin >> s;
   	a.clear();
   	for (auto u : s) a.push_back(u - '0');
	return a,cin; 
} 
void add_zero (vi &a, int sz) {//viết thêm các số 0 ở đầu
	reverse(a.begin(),a.end()); 
	// reverse lại để tối ưu thời gian
	while (a.size() < sz) a.push_back(0); 
	reverse(a.begin(),a.end());
}
void del_zero (vi &a) { // xóa các số 0 vô nghĩa ở đầu
	reverse(a.begin(),a.end()); 
	while (a.size() >= 2) {
		if (a.back() == 0) a.pop_back();
		else break;
 	}
 	reverse(a.begin(),a.end());
}
void change (vi &a, vi &b) { // đưa 2 số về cùng một size bằng các push các số 0 lên đầu
	int sz = max (a.size(),b.size());
	add_zero (a,sz);
	add_zero (b,sz);
}
// các phép toán so sánh
bool operator < (vi a, vi b) {
	change (a,b);
	for (int i=0; i<a.size(); i++) {
		if (a[i] < b[i]) return true;
		else if (a[i] > b[i]) return false;
	}
	return false;
}
bool operator > (vi a, vi b) {
	change (a,b);
	for (int i=0; i<a.size(); i++) {
		if (a[i] > b[i]) return true;
		else if (a[i] < b[i]) return false;
	}
	return false;
}
bool operator <= (vi a, vi b) {
	change (a,b);
	for (int i=0; i<a.size(); i++) {
		if (a[i] < b[i]) return true;
		else if (a[i] > b[i]) return false;
	}
	return true;
}
bool operator >= (vi a, vi b) {
	change (a,b);
	for (int i=0; i<a.size(); i++) {
		if (a[i] > b[i]) return true;
		else if (a[i] < b[i]) return false;
	}
	return true;
}
bool operator == (vi a, vi b) {
	change (a,b);
	for (int i=0; i<a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}
// end
// phép toán cộng
vi operator + ( vi a,  vi b) {
	change (a,b);
	int sz = a.size();
	vi c;
	int rem = 0; 
	for (int i=sz-1; i>=0; i--) {
		int x = a[i] + b[i] + rem;
		rem = x/10; x%=10;
		c.push_back(x);
	}
	c.push_back(rem);
	reverse(c.begin(),c.end());
	del_zero(c);
	return c;
}
// end
// phép toán trừ
vi operator - (vi a, vi b) {
	change (a,b);
	int sz = a.size();
	vi c;
	int rem = 0;
	for (int i=sz-1; i>=0; i--) {
		int x = a[i] - b[i] - rem;
		if (x < 0) {
			x += 10;
			rem = 1;
		}
		else rem = 0;
		c.push_back(x);
	}
	reverse(c.begin(),c.end());
	del_zero (c);
	return c;
}
// end
// phép nhân hai số lớn
vi operator*( vi a,  vi b) {
    vi c(a.size() + b.size() + 1); // kết quả sẽ có tối đa (a.size() + b.size()) kí tự
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    // reverse lại hai số để dễ thực hiện thứ tự tính toán
    // thực hiện phép nhân theo thứ tự từ cuối về
    // sau khi reverse ta sẽ bắt đầu for từ 0
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
        	// ta đang lưu kết quả c cũng theo thứ tự ngược lại với ban đầu
            c[i + j] += a[i] * b[j]; // a[i] và b[j] sẽ được cộng vào kí tự thứ i + j của kết quả
            c[i + j + 1] += c[i + j] / 10; // nếu c[i+j] >= 10 thì ta sẽ cộng phần nhớ cho c[i+j+1] 
            c[i + j] %= 10; // ta sẽ mod luôn cho c[i + j] để tránh tràn số
        }
    }
    // bây giờ ta thu được mảng kết quả c đang bị đảo ngược, tuy nhiên vẫn cần xử lí một vài số >= 10 do chưa được cộng hết.
    c.push_back(0);
    for (int i=0; i<c.size()-1; i++) {
    	c[i+1] += c[i]/10;
    	c[i] %= 10;
	}
	// đảo ngược lại hàm c và xóa các số 0 vô nghĩa ở đầu, ta sẽ thu được kết quả.
	reverse(c.begin(),c.end());
	del_zero (c);
	// đảo ngược lại số a và b về trạng thái ban đầu
	reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    return c;
}
// end
int vi_to_int (vi a) { // chuyển từ vector<int> sang int
	int res = 0;
	for (int i=0; i<a.size(); i++) {
		res = res*10 + a[i];
	}
	return res;
}
vi int_to_vi (int n) { // chuyển từ int sang vector<int>
	vi c;
	if (n == 0) {
		c.push_back(n);
		return c;
	} 
	while (n) {
		c.push_back(n%10);
		n /= 10;
	}
	reverse(c.begin(),c.end());
	return c;
}
// chia số lớn cho số bé
// kết quả thu được dưới dạng phần nguyên
vi operator / (vi a, int b) {
	int cur = 0;
	int sz = a.size();
	vi c;
	for (int i=0; i<sz; i++) {
		cur = cur*10 + a[i];
		c.push_back (cur/b);
		cur %= b;
	}
	del_zero (c);
	return c;
}
// end
// chia hai số lớn
// sử dụng phương pháp tìm kiếm nhị phân kết quả
// kết quả thu được dưới dạng phần nguyên
vi operator / (vi a, vi b) {
	vi l,r,res;
	res.push_back(0); // ban đầu res = 0
	l.push_back(1); // gán l = 1
	r = a; // gán r = a;
	vi one = int_to_vi (1);
	while (r >= l) {
		vi mid = (r+l) / 2;
		if (mid*b <= a) {
			res = mid;
			l = mid + one;
		}
		else r = mid - one;
	}
	return res;
}
// end
// phép mod số lớn cho số nhỏ
int operator % (vi a, int b) {
	int res = 0;
	int sz = a.size();
	for (int i=0; i<sz; i++) {
		res = (res*10 + a[i])%b;
	}
	return res;
}
// end
// phép mod hai số lớn
vi operator % (vi a, vi b) {
	vi c = a/b*b;
	return a - c;
}
// end
const int N = 505;
vi a[N];
int n;
vi dist (vi &a, vi &b) {
	if (a > b) return a - b;
	else return b - a;
}
bool cmp (vi a, vi b) {
	return a < b;
}
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i=1; i<=n; i++) 
		cin >> a[i];
	sort(a+1,a+n+1,cmp);
	vi x = a[(n+1)/2];
	vi res; res.push_back(0);
	for (int i=1; i<=n; i++)
		res = res + dist (a[i],x);
	cout << res;
} 
