#include <bits/stdc++.h>
 
using namespace std;
 
string s;
int cnt, flag;
set<char> st;

int main() {
    cin >> s;
    s += '0';
    for (int i = 0; i <s.size(); i++) {
         if (s[i] != 'A' && s[i] != 'E' && s[i] != 'O' && s[i]!= 'U' && s[i] != 'I' && s[i] != '0') {
             st.insert(s[i]);
             if (cnt >= 3) flag = 1;
             cnt = 0;
         }
         else cnt++;
     }
     
    if(flag && st.size() >= 5) cout << "YES";
    else cout<< "NO";
    return 0;
}
 