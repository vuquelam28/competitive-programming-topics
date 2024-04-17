#include <bits/stdc++.h>
using namespace std;

string so_nguon_goc(string n)
{
    if(n.size() == 1) return n;
    int sum = 0;
    for(int i = 0; i < n.size(); ++i) sum += n[i] - '0'; //tính tổng chữ số
    return so_nguon_goc(to_string(sum));
}

int main() {
    string n;
    cin >> n;
    cout << so_nguon_goc(n);
    return 0;
}