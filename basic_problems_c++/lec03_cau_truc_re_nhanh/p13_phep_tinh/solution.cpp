#include <bits/stdc++.h>

using namespace std;

main()
{
    int a, b;
    cin >> a >> b;
    char x;
    cin >> x;

    switch (x)
    {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << (long long)a * b;
            break;

        case '/':
            cout << a / b;
            break;
            
        case '%':
            cout <<  a % b;
            break;
    }   

    return 0;
}