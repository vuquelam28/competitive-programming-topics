#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>

using namespace std;

typedef vector < int > vi;

// Nạp chồng toán tử trích luồng, dùng để nhập vào số lớn.
istream &operator >> (istream &cin, vi &number)
{
    string s;
    cin >> s;

    number.clear();
    for (int i = 0; i < (int) s.size(); ++i)
        number.push_back(s[i] - '0');

    return cin;
}

// Nạp chồng toán tử chèn luồng, dùng để in ra số lớn.
ostream &operator << (ostream &cout, const vi &a) 
{
    for (auto d: a) 
        cout << d;

    return cout;
} 

// Xóa các số 0 vô nghĩa ở đầu.
void del_zero(vi &a) 
{ 
    reverse(a.begin(), a.end()); 

    while (a.size() >= 2) 
        if (a.back() == 0) 
            a.pop_back();
        else 
            break;

    reverse(a.begin(), a.end());
}

vi int_to_vi(int n) 
{ 
    vi c;
    if (n == 0) 
    {
        c.push_back(n);
        return c;
    } 

    while (n) 
    {
        c.push_back(n%10);
        n /= 10;
    }
    reverse(c.begin(),c.end());

    return c;
}

// Nhân hai số lớn.
vi operator * (vi a, vi b)
{
    // Đảo ngược hai số trước để tiện tính toán.
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
	
    // Resize trước mảng kết quả. Kết quả của tích có thể đạt tới số chữ số  
    // bằng tổng độ dài của hai số ban đầu cộng lại và cộng thêm 1.
    vi c(a.size() + b.size() + 1);
    for (int i = 0; i < (int) a.size(); ++i)
        for (int j = 0; j < (int) b.size(); ++j)
        {
            c[i + j] += (a[i] * b[j]);
            c[i + j + 1] += (c[i + j] / 10);
            c[i + j] %= 10;
        }

    // Xử lý nốt phần giá trị nhớ chưa được cộng hết.
    // Mảng c hiện tại đang là mảng kết quả bị đảo ngược.
    c.push_back(0);
    for (int i = 0; i < (int) c.size() - 1; ++i) 
    {
    	c[i + 1] += (c[i] / 10);
    	c[i] %= 10;
    }

    // Đảo ngược mảng c và xóa các chữ số 0 vô nghĩa ở đầu, ta sẽ thu được tích a * b.
    reverse(c.begin(), c.end());
    del_zero(c);
	
    return c;
}

vi power (vi &a, int b)
{
    if (b == 0)
        return int_to_vi(1);
    
    vi half = power(a, b / 2);
    
    if (b % 2 == 1)
        return half * half * a;
    else
        return half * half;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vi a;
    int b;
    cin >> a >> b;
    
    cout << power(a, b);
    return 0;
}