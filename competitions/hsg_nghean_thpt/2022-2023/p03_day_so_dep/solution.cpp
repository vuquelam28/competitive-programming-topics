#pragma GCC optimize("O2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &n, int &k, vector < int > &a, vector < int > &sum1,
           vector < int > &sum2, vector < int > &b)
{
    cin >> n >> k;

    a.resize(n + 1);
    sum1.resize(n + 1);
    sum2.resize(n + 1);
    b.resize(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];

        sum1[i] = sum1[i - 1];
        sum2[i] = sum2[i - 1];

        if (a[i] % 2 == 0)
            sum1[i] += a[i];
        else
            sum2[i] += a[i];

        // Xây dựng mảng b[i] = sum1[i] - sum2[i]. Khi đó một đoạn con [j + 1, i] thỏa mãn phải
        // là đoạn con có ít nhất một số lẻ, một số chẵn và có 0 <= b[i] - b[j] <= k.
        b[i] = sum1[i]- sum2[i];
    }
}

void subtask12(int n, int k, vector < int > &b,
               vector < int > &sum1, vector < int > &sum2)
{
    int res = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < i; ++j)
            if (sum1[i] > sum1[j] && sum2[i] > sum2[j])
                res += (0 <= b[i] - b[j] && b[i] - b[j] <= k);

    cout << res;
}

void subtask34(int n, int k, vector < int > &a, vector < int > &sum1,
               vector < int > &sum2, vector < int > &b)
{
    // Tính toán sơ bộ kết quả: Đếm tất cả các dãy con liên tiếp thỏa mãn
    // yêu cầu đề bài, bao gồm cả các dãy con gồm toàn số lẻ/toàn số chẵn.
    // Do k <= 100 nên ta sử dụng map kết hợp với một vòng lặp để đếm toàn bộ
    // các b[j] thỏa mãn: b[i] - k <= b[j] <= b[i] ở phía trước b[i].
    unordered_map < int, int > cnt; // Dùng unordered_map cho tối ưu thời gian.
    cnt[0] = 1;

    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = b[i] - k; j <= b[i]; ++j)
            res += cnt[j];

        ++cnt[b[i]];
    }

    // Trừ bớt đi các dãy con liên tiếp thỏa mãn nhưng chỉ bao gồm toàn số chẵn, bởi vì ở
    // bên trên ta đã loại trừ trước các dãy chỉ gồm toàn số lẻ rồi.
    // Bước này ta tách riêng các đoạn gồm toàn toàn số chẵn liên tiếp rồi thực hiện giống
    // như bước tính toán kết quả sơ bộ ban đầu.
    int i = 1, j = 0;
    while (i <= n)
    {
        // Bỏ qua các đoạn gồm toàn số lẻ liên tiếp.
        while (i <= n && a[i] % 2 == 1)
            ++i, j = i - 1;

        // Xét đoạn gồm toàn số chẵn liên tiếp bắt đầu từ vị trí i.
        // Ta cũng sử dụng kĩ thuật đếm phân phối bằng map giống bên trên.
        unordered_map < int, int > new_cnt; // Dùng unordered_map cho tối ưu thời gian.
        new_cnt[0] = 1;

        int range_sum = 0;
        while (j < n && a[j + 1] % 2 == a[i] % 2)
        {
            ++j;
            range_sum += a[j];

            for (int v = range_sum - k; v <= range_sum; ++v)
                res -= new_cnt[v];

            ++new_cnt[range_sum];
        }

        i = j + 1;
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    vector < int > a, sum1, sum2, b;

    enter(n, k, a, sum1, sum2, b);

    if (n <= 5000)
        subtask12(n, k, b, sum1, sum2);
    else
        subtask34(n, k, a, sum1, sum2, b);

    return 0;
}
