#include <iostream>
using namespace std;

string s;

string check(int i, int j)
{
    if(s[i] != s[j]) return "NO";
    if(j < i) return "YES";
    return check(i + 1, j - 1);
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << check(0, s.size() - 1) << '\n';
    }
    return 0;
}