#include<iostream>

using namespace std;

main()
{
    int N;
    cin >> N;

    long long P = 0;
    for (int i = 1; i <= N; ++i)
    {
        long long exponentiation = 1;
        for (int j = 1; j <= i; ++j)
            exponentiation *= i;

        P += exponentiation;
    }

    cout << P;

    return 0;
}