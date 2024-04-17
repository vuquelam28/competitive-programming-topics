#include <iostream>
using namespace std;

long long n;

void binary(long long a)
{
    if (n != 0 && a == 0) 
        return;
    if ((a == 0 && n == 0) || a == 1) 
        return void(cout << (a % 2LL));

    binary(a / 2LL);

    cout << (a % 2LL); //bit cuoi cung cua so n;
} 

int main() 
{
    cin >> n;
    binary(n);
    return 0;
}