#include <bits/stdc++.h>

using namespace std;

int a[101][101], b[101][101];

void print_array(int n, int a[101][101])
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

void rotate_180_degree(int n, int a[101][101], int b[101][101])
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            b[i][j] = a[n - j + 1][i];
            
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            a[i][j] = b[n - j + 1][i];
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
            for (int j = 1; j <= n; ++j)
                cin >> a[i][j];

        rotate_180_degree(n, a, b);
        print_array(n, a);           
    }
    
    return 0;
}