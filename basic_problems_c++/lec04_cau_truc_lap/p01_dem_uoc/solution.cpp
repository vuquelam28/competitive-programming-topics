#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int divisors = 0;
    for (int i = 1; i <= N; ++i)
        if (N % i == 0)
            ++divisors;

    cout << divisors;

    return 0;
}