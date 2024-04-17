#include <bits/stdc++.h>

using namespace std;

void enter(string &s)
{
    cin >> s;
}

void solution(string s)
{
    s = s + ' ';

    int number = 0, octet_cnt = 0;
    for (char c: s)
        if ('0' <= c && c <= '9')
            (number *= 10) += (c - '0');
        else
        {
            ++octet_cnt;
            if (number > 255 || octet_cnt > 4)
            {
                cout << "Invalid";
                return;
            }

            number = 0;
        }

    if (octet_cnt == 4)
        cout << "Valid";
    else 
        cout << "Invalid";
}

main()
{
    string s;

    enter(s);
    solution(s);

    return 0;
}