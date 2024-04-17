#include <bits/stdc++.h>

using namespace std;

int x, n, res = 0;
long long sum = 0;

long long power(int x, int y)
{
    if(y == 0) return 1;
    long long tmp = power(x, y / 2);
    if (y % 2 == 0) return tmp * tmp;
    else return x * tmp * tmp;
}

void backTrack(int k, int pre) {
    for (int i = 31; i >= pre + 1; i--) {
        sum += power(i, n);
        if (sum == x) {
            res++;
        } else if (sum < x) {
            backTrack(k + 1, i);
        }    
        sum -= pow(i, n);
    }    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x >> n;
    
    backTrack(1, 0);

    cout << res;

    return 0;
}