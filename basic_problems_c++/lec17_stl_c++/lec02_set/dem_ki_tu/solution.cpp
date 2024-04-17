#include <bits/stdc++.h>

using namespace std;

string s;
int a, b;

int main() {
    cin >> s;
    set <char> se;
    for (int i = 0; i < s.size(); i++) se.insert(s[i]);
    for (set<char>:: iterator it = se.begin(); it != se.end(); it++) {
		char str = *it;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
            if (str == s[i]) cnt++;
        
        cout << str << " " << cnt << "\n";
	}
    return 0;
}