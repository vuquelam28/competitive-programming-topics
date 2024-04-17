#include <bits/stdc++.h>
#define int long long
#define task "merge_sets."

using namespace std;

void enter(int &n, vector < pair < int, int > > &ranges)
{
    cin >> n;

    ranges.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> ranges[i].first >> ranges[i].second;
}

void solution(int n, vector < pair < int, int > > &ranges)
{
    // Sắp xếp tăng dần các đoạn theo vị trí bắt đầu.
    sort(ranges.begin(), ranges.end());

    // Sử dụng hai biến chạy là i và j để di chuyển trên các đoạn có thể hợp nhất.
    int i = 0, j = 0;
    vector < pair < int, int > > new_ranges;
    while (i < n)
    {
        // Coi như đoạn i là đoạn đầu tiên, ta tìm các đoạn có thể hợp nhất với i.
        int finish = ranges[i].second;
        while (j < n - 1 && ranges[j + 1].first <= finish)
        {
            finish = max(finish, ranges[j + 1].second);
            ++j;
        }

        new_ranges.push_back({ranges[i].first, finish});

        // Dịch chuyển i và j lên.
        i = j + 1;
        j = i;
    }

    for (auto r: new_ranges)
        cout << r.first << ' ' << r.second << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector < pair < int, int > > ranges;

    enter(n, ranges);
    solution(n, ranges);

    return 0;
}