#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && b < c || a < b && b <= c)
        cout << "Increasing Sequence";
    else if (a >= b && b > c || a > b && b >= c)
        cout << "Decreasing Sequence";
    else if (a == b && b == c)
        cout << "Equal Sequence";
    else 
        cout << "None";

    return 0;
}