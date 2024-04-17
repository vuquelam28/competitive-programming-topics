#include <iostream>

using namespace std;

int n;
int a[105];

int sum(int i)
{
    if (i == n) 
        return a[n];

    return a[i] + sum(i + 1);
}

int main() 
{
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
    
    cout << sum(1);
    
    return 0;
}