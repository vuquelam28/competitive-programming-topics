#include <iostream>

using namespace std;

int arr[101];

void input_array(int n, int* p_arr)
{
    for (int i = 0; i < n; ++i)
        cin >> *(p_arr + i);
}

int find_max_array(int n, int *p_arr)
{
    int max_value = 0;
    for (int i = 0; i < n; ++i)
        if (*(p_arr + i) > max_value)
            max_value = *(p_arr + i);

    return max_value;
}

void replace_array_element(int n, int *p_arr)
{
    int max_value = find_max_array(n, p_arr);
    for (int i = 0; i < n; ++i)
    {
        if (*(p_arr + i) % 2 == 0)
            *(p_arr + i) = max_value;

        cout << *(p_arr + i) << ' ';
    }
}

main()
{
    int n;
    cin >> n;

    int* p_arr = arr;
    input_array(n, p_arr);
    replace_array_element(n, p_arr);

    return 0;
}