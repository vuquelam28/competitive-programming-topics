#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main()
{
    int M, N;
    cin >> M >> N;

    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> a[i][j];

    int row_cnt = 0, max_even_cnt = 0, index = 0;
    for (int i = M; i >= 1; --i)
    {
        int even_number_cnt = 0;
        for (int j = 1; j <= N; ++j)
            if (a[i][j] % 2 == 0)
                ++even_number_cnt;

        if (max_even_cnt < even_number_cnt)
        {
            max_even_cnt = even_number_cnt;
            index = i;
            row_cnt = 1;
        }
        else if (max_even_cnt == even_number_cnt)
            ++row_cnt;
    }

    cout << index << endl << row_cnt;

    return 0;
}


