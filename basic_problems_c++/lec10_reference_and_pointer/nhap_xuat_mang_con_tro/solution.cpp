#include <iostream>

using namespace std;

long long arr[101];

main()
{
    int n;
    cin >> n;

    for (long long* ptr = &arr[1]; ptr <= &arr[n]; ++ptr)
        cin >> *ptr;

    for (long long* ptr = &arr[n]; ptr >= &arr[1]; --ptr)
        cout << *ptr << ' ';

    return 0;
}