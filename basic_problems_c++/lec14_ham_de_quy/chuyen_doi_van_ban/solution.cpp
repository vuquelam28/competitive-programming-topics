#include <bits/stdc++.h>
using namespace std;

string s;

void rev(int i)
{
    if (i == s.size()) 
	return;

    if (s[i] >= 'a' && s[i] <= 'z') 
        cout << char(s[i] - 32);
    else 
        cout << char(s[i] + 32);

    rev(i + 1);    
}

int main() 
{
    cin >> s;
    rev(0);
    return 0;
}