#include <bits/stdc++.h>

using namespace std;

int a[101], b[101];

int * create_array(int n, int* a)
{
    int *ptr_b = b;
    *(ptr_b + 1) = *(a + 2);
    *(ptr_b + n) = *(a + n - 1);

    for (int i = 2; i < n; ++i)
    {
        int v1 = *(a + i - 1), v2 = *(a + i + 1);
        if (v1 < v2)
            *(ptr_b + i) = v1;
        else
            *(ptr_b + i) = v2;
    }

    return ptr_b;
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
            cin >> *(a + i);

        int* ptr_b = create_array(n, a);
        for (int i = 1; i <= n; ++i)
            cout << *(ptr_b + i) << ' ';

        cout << endl;
    }

    return 0;
}