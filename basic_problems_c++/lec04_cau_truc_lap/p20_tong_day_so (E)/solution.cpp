#include <iostream>

using namespace std;

int main()
{
    int n, _size = 0;
    long long sum = 0;
    while (cin >> n)
    {
        ++_size;
        sum += n;
    }
    
    // Số lượng phần tử của dãy là _size - 1.
    // Tổng các số trong dãy: (a1 + a2 + ... + an) = sum - (_size - 1);
    cout << sum - (_size - 1);
    
    return 0;
}