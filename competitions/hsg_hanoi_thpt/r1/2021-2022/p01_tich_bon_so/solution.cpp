#include<bits/stdc++.h>
using namespace std;
#define ld long double
string s[5];
int check(string s) 
{
	for (int i = 0; i < s.size(); i++) 
    {
		if (s[i] == '-' || s[i] == '.') 
            continue;

		if (s[i] != '0') 
            return false;
	}
    
	return true;
}  

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 1; i <= 4; i++) 
		cin >> s[i];

	int l = 0;
	for (int i = 1; i <= 4; i++) 
    {
		if (check(s[i])) 
        {
			cout << 0;
			return 0;
		}

		if (s[i][0] == '-') 
            l++;
	}

	if (l % 2) 
        cout << -1;
	else 
        cout << 1;
}
