#include <iostream>
using namespace std;

int a[101];

int main() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int check = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] < 0)
        {
            cout << i << endl;
            check = 1;
        }

    if (check == 0)
        cout << 0;

    return 0;
}