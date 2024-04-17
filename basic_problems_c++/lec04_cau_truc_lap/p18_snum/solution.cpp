#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int N;
        cin >> N;

        int digit_sum = 0, M = N;
        while (M != 0)
        {
            digit_sum += M % 10;
            M /= 10;
        }

        if (N % digit_sum == 0)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    return 0;
}


