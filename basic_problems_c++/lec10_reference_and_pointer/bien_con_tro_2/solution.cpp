#include <iostream>

using namespace std;

main()
{
    int n, x;
    cin >> n >> x;

    int* ptr_n = &n;
    *ptr_n += x;

    cout << *ptr_n;

    return 0;
}