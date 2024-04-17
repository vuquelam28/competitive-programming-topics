#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

typedef long double dbl;
typedef long long ll;

template<class T>
void print(vector<T> s){
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    cout << endl;
}


int main()
{
    /*freopen("test.in", "r", stdin);/**/
    /*freopen("meteor.in", "r", stdin);
    freopen("meteor.out", "w", stdout);/**/
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    ll answer = 0;
    while (n != 1){
        if (n >= k){
            answer += (n % k) * a;
            n -= n % k;
        }
        else{
            answer += (n - 1) * a;
            break;
        }
        if ((n - n / k) * a < b){
            answer += n * a - a;
            break;
        }
        n /= k;
        answer += b;
    }
    cout << answer << endl;
    return 0;
}
