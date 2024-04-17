#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    // Công việc 1: Kiểm tra số nguyên tố.
    bool is_prime = true; // Kiểm tra N có phải số nguyên tố không.
    if (N == 1)
        is_prime = false;
    else
    {
        for (int i = 2; i < N; ++i)
            if (N % i == 0) // N chia hết cho một số trong đoạn [2, N - 1].
            {
                is_prime = false; // N chắc chắn không phải số nguyên tố.
                break;
            }
    }

    // Công việc 2: Đếm số lượng số nguyên dương chia hết cho 5 không vượt quá N.
    int multiple_five = 0; // Số bội của 5 không vượt quá N.
    for (int i = 5; i <= N; i = i + 5)
        ++multiple_five;

    // Công việc 3: Tổng các số lẻ và tích các số chẵn.
    int odd_sum = 0;
    long long even_product = 1;
    for (int i = 1; i <= N; ++i)
        if (i % 2 == 1)
            odd_sum += i;
        else
            even_product *= (long long)i;

    // In kết quả.
    if (is_prime == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cout << multiple_five << endl;
    cout << odd_sum << ' ' << even_product;

    return 0;
}