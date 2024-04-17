#include <bits/stdc++.h>
#define int long long
#define task "Bai1_1718."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
string T, H;

void enter()
{
    getline(cin, T);
    getline(cin, H);
}

void equalize(string &A, string &B)
{
    while (A.size() < B.size()) A = '0' + A;
    while (B.size() < A.size()) B = '0' + B;
}

string sum(string A, string B)
{
    equalize(A, B);
    int sum = 0, carry = 0;
    string res;

    for (int i = A.size() - 1; i >= 0; --i)
    {
        sum = (A[i] - '0') + (B[i] - '0') + carry;
        carry = sum / 10;
        res = (char)(sum % 10 + '0') + res;
    }
    if (carry > 0) res = '1' + res;
    return res;
}

string difference(string A, string B)
{
    equalize(A, B);
    int d = 0, borrow = 0;
    string res;

    for (int i = A.size() - 1; i >= 0; --i)
    {
        d = (A[i] - '0') - (B[i] - '0') - borrow;
        if (d < 0)
        {
            d += 10;
            borrow = 1;
        }
        else borrow = 0;
        res = (char)(d + '0') + res;
    }

    while (!res.empty() && res.front() == '0')
        res.erase(res.begin());

    return res;
}

string qoutient(string A, long long B)
{
    long long hold = 0, s = 0;
    string res;

    for (int i = 0; i < A.size(); ++i)
    {
        hold = hold * 10 + (A[i] - '0');
        s = hold / B;
        hold %= B;
        res = res + (char)(s + 48);
    }
    
    while (res.size() > 1 && res[0] == '0')
        res.erase(res.begin());

    return res;
}

void solution()
{
    string A = qoutient(sum(T, H), 2), B = difference(T, A);
    cout << A << endl << B;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}