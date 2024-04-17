#include <bits/stdc++.h>

using namespace std;

int n, a[10], cnt = 0;
bool mark[10];

void backtrack(int x)
{
    if( x > n){
        ++cnt;
        for( int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << "\n";
    }
    for( int i = 1; i <= n; i++){
         if( !mark[i]){
             a[x] = i;
             mark[i] = true;
             backtrack( x + 1);
             mark[i] = false;
         }
    }
}

int main()
{
    cin >> n;
    memset( mark, false, sizeof(mark));
    backtrack(1);
}