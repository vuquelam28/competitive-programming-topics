#include <bits/stdc++.h>
#define int long long

using namespace std;

bool check(int D, int n, vector < pair < int, int > > &p,
           vector < int > &maxy, vector < int > &miny)
{
    int j = 1;
    for (int i = 1; i <= n; ++i)
    {
        // Tìm điểm j đầu tiên sao cho x[j] - x[i] >= D.
		// Mọi điểm trong đoạn [j, n] đều chênh lệch hoành độ với điểm i tối thiểu là D.
        while (j <= n && p[j].first - p[i].first < D)
            ++j;

        // Không tìm được điểm j ghép với điểm i, dừng vòng lặp.
        if (j > n)
            break;

        if (abs(p[i].second - maxy[j]) >= D || abs(p[i].second - miny[j]) >= D)
            return true;
    }

    return false;
}

void solution(int n, vector < pair < int, int > > &p)
{
    sort(p.begin() + 1, p.end());

	// Khởi tạo maxy[i] và miny[i] lần lượt là tung độ lớn nhất và nhỏ nhất của các điểm thuộc đoạn [i, n]. 
	// Ta xây dựng hai mảng bằng công thức truy hồi tương tự với mảng tổng tiền tố.
    vector < int > maxy(n + 1), miny(n + 1);
    maxy[n] = p[n].second, miny[n] = p[n].second;
    for (int i = n - 1; i >= 1; --i)
    {
        maxy[i] = max(maxy[i + 1], p[i].second);
        miny[i] = min(miny[i + 1], p[i].second);
    }

    int res = 0, l = 0, r = 1e9;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(mid, n, p, maxy, miny))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < pair < int, int > > p(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> p[i].first >> p[i].second;

    solution(n, p);

    return 0;
}