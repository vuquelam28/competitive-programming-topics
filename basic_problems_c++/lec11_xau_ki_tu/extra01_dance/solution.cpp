#include <iostream>
#include <string>

using namespace std;
 
main()
{
    string a; 
    cin >> a;

    for (int i = 0; i < (int) a.size(); i += 2)
        if (a[i] == 'L')
        {
            cout << "No";
            return 0;
        }

    for(int i = 1; i < (int) a.size(); i += 2)
        if (a[i] == 'R')
        {
            cout << "No";
            return 0;
        }

    cout << "Yes";
 
    return 0;
}