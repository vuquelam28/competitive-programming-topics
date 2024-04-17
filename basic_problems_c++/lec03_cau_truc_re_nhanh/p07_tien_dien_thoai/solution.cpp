#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int total_money = 0;
    if (N <= 10)
        total_money = 1000 * 10;
    else if (N <= 40)
        total_money = 1000 * 10 + 700 * (N - 10);
    else
        total_money = 1000 * 10 + 700 * 30 + 500 * (N - 40);

    cout << total_money;
}