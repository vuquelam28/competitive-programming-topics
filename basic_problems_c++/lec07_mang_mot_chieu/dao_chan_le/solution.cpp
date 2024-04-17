#include <iostream>

using namespace std;

const int maxn = 1001;
int a[maxn];

void swap_element(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            if (abs(a[i]) % 2 == 0 && abs(a[j]) % 2 == 0)
                swap_element(a[i], a[j]);
            else if (abs(a[i]) % 2 == 1 && abs(a[j]) % 2 == 1)
                swap_element(a[i], a[j]);
        }

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    return 0;
}