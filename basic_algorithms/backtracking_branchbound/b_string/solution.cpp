#include <bits/stdc++.h>

using namespace std;

string b_string;
vector < string > res;

void backtrack(int i, int n)
{
    if (b_string.back() == 'B' && b_string[b_string.size() - 2] == 'B')
        return;

    if (i > n)
    {
        res.push_back(b_string);
        return;
    }

    for (int j = 0; j <= 1; ++j)
    {
        if (j == 0)
            b_string = b_string + 'A';
        else
            b_string = b_string + 'B';

        backtrack(i + 1, n);

        b_string.erase(b_string.size() - 1, 1);
    }
}

main()
{
    int n;
    cin >> n;

    backtrack(1, n);
    sort(res.begin(), res.end());

    for (string s: res)
        cout << s << endl;

    return 0;
}