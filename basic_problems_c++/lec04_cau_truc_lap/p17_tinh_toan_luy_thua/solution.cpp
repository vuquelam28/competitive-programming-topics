#include <iostream>

using namespace std;

int main() 
{
    long long a, b;
    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        long long res = a;
        for (int i = 2; i <= b; ++i)
            res *= a;

        cout << res << endl;
    }

    return 0;
}