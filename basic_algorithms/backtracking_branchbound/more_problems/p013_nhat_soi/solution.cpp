#include <iostream>
using namespace std;

int n;
int a[11];

int back_tracking(int l, int r)
{
    if(r < l) return 0;
    return max(a[l] + min(back_tracking(l + 2, r), back_tracking(l + 1, r - 1)), a[r] + min(back_tracking(l, r - 2), back_tracking(l + 1, r - 1)));
}

int main() {
    cin >> n;
    int tol = 0;
    for(int i = 1; i <= n; ++i) 
    {
        cin >> a[i];
        tol += a[i];;
    }
    int score = back_tracking(1, n);
    if(score > tol - score) cout << "UcoderA";
    else if(score < tol - score) cout << "UcoderB";
    else cout << "Draw";
    cout << '\n';
    cout << score << ' ' << tol - score;
    return 0;
}