#include <bits/stdc++.h>
 
using namespace std;
 
int n;
long long int a[100005];
set <long long int> s;
set <long long int> :: iterator it; 

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        it = s.lower_bound(a[i]);
        if (it == s.begin()) cout << "-1\n";
        else {
            --it;
            cout << *it << "\n";
        }
        s.insert(a[i]);
    }
    return 0;
}