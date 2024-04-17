#include <bits/stdc++.h>

using namespace std;

int a[101], f[101];

int cnt_elements(int n, int value, int* a)
{
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
        if (*(a + i) == value)
            ++cnt;

    return cnt;
}

int* create_array(int n, int maxv, int* a)
{
    int* ptr_f = f;
    for (int value = 0; value <= maxv; ++value)
        *(ptr_f + value) = cnt_elements(n, value, a);

    return ptr_f;
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxv = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> *(a + i);

            if (*(a + i) > maxv)
                maxv = *(a + i);
        }

        int* ptr_f = create_array(n, maxv, a);
        for (int i = 0; i <= maxv; ++i)
            cout << *(ptr_f + i) << ' ';

        cout << endl;
    }

    return 0;
}