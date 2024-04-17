#include<bits/stdc++.h>
using namespace std;
#define pa pair<char,char> 
string a,p,b;
pa div (string a) {
	int res = 0;
	for (auto x : a) res = res*10+x-'0';
	char x = (res/2+'0');
	char y = (res%2+'0');
	return pa({x,y});
}
string chia2 (string a) {
	string res = "";
	string cur = "";
	for (int i=0; i<a.size(); i++) {
		cur = cur + a[i];
		pa c = div(cur);
		res.push_back(c.first);
		cur = c.second;
	}
	reverse(res.begin(),res.end());
	while(res.back() == '0') res.pop_back();
	reverse(res.begin(),res.end());
	return res;
}
string convert (string a) {
	string res = "";
	string base = "0";
	while (a.size()) {
		char x = ((a.back()-'0')%2+'0');
		res.push_back(x);
		a = chia2(a);
	}
	reverse(res.begin(),res.end());
	return res;
}
string cong(string a,string b) {
	while (a.size() < b.size()) a = "0" + a;
	while (b.size() < a.size()) b = "0" + b;
	string res = "";
	int nho = 0;
	for (int i=a.size()-1; i>=0; i--) {
		char c = a[i] + b[i] - '0' + nho;
		if (c >= '2') {
			c -= 2;
			nho = 1;
		} 
		else nho = 0;
		res.push_back(c);
	}
	if (nho) res.push_back('1');
	reverse(res.begin(),res.end());
	return res;
}
string tru (string a, string b) {
	while (a.size() < b.size()) a = "0" + a;
	while (b.size() < a.size()) b = "0" + b;
	string res = "";
	bool ok = 1;
	int nho = 0;
	for (int i=a.size()-1; i>=0; i--) {
		char c = a[i] - b[i] + '0' - nho;
		if (c < '0') {
			c += 2;
			nho = 1;
		} 
		else nho = 0;
		res.push_back(c);
	}
	if (nho) res.push_back('1');
	while (res.back() == '0') res.pop_back();
	reverse(res.begin(),res.end());
	return res;
}
bool check (string a, string b) {
	if (a.size() == b.size()) return a >= b; 
	return a.size() > b.size();
}
void xuli (string &a) {
	reverse(a.begin(),a.end());
	while (a.back() == '0') a.pop_back();
	reverse(a.begin(),a.end());
}
string chia (string a, string b) {
	string res = "";
	string cur = "";
	for (int i=0; i<a.size(); i++) {
		xuli(cur);
		cur.push_back(a[i]);
		if (check(cur,b)) {
			cur = tru(cur,b);
			res.push_back('1');
		}
		else res.push_back('0');
	}
	reverse(res.begin(),res.end());
	while (res.back() == '0') res.pop_back();
	reverse(res.begin(),res.end());
	return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> p >> b;
	a = convert(a);
	b = convert(b);
	if (p == "chia") {
		cout << chia(a,b);
		return 0;
	}
	if (p == "cong") cout << cong(a,b);
	else cout << tru(a,b);
}
