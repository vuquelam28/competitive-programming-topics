#include <iostream>

using namespace std;

int arr[101];

void input_array(int n, int* p_arr)
{
    for (int i = 0; i < n; ++i)
        cin >> *(p_arr + i);
}

bool check_power_two(int x)
{
    int i = 0, power = 1;
    while (true)
    {
        if (power == x)
            return true;

        if (power > x)
            return false;

        ++i;
        power *= 2;
    }
}

void solution(int n, int* p_arr)
{
    int res = 0;
    for (int i = 0; i < n; ++i)
        res += check_power_two(*(p_arr + i));

    cout << res;
}

main()
{
    int n;
    cin >> n;

    int* p_arr = arr;
    input_array(n, p_arr);
    solution(n, p_arr);

    return 0;
}