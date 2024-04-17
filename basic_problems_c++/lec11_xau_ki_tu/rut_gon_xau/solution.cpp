#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    char chr = str[0];
    int n = 0;
    str += ' ';
    
    for (int i = 0; i <= str.size() - 1; i++) 
    {
        if (str[i] == chr) 
            n = n + 1;
	    else 
        {
            cout << n << str[i - 1]; 
            n = 1;
		    chr = str[i];
	    }
    }

    return 0;
}