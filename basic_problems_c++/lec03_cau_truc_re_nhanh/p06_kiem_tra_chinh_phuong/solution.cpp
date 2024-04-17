#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int b = sqrt(a);
    if (b * b == a)
        cout << "1";
    else
        cout << "0";

    return 0;
}