#include<iostream>

using namespace std;

main()
{
    int N;
    cin >> N;

    long long factorial = 1, S = 0;
    for (int i = 1; i <= N; ++i)
    {
        factorial *= (long long) i;
        S += factorial;
    }

    cout << S;

    return 0;
}