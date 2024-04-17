#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int digits = 0;
    while (N > 0)
    {
        ++digits;
        N /= 10;
    }

    cout << digits;

    return 0;
}