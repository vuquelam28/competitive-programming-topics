#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(string& n)
{
    int multiply = 1, natural_num = 0;
    bool dot_found = false;

    for (int i = 0; i < n.size(); ++i)
        if (n[i] != '.')
        {
            natural_num = natural_num * 10 + (n[i] - '0');
            if (dot_found == true)
                multiply *= 10;
        }
        else
            dot_found = true;

    if (dot_found == false)
        cout << 1 << '\n';
    else
        cout << multiply / __gcd(natural_num, multiply) << '\n';
}

main()
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        string n;
        cin >> n;

        solution(n);
    }

    return 0;
}