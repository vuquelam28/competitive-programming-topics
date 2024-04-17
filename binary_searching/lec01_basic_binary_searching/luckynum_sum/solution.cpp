#include <bits/stdc++.h>
#define int long long

using namespace std;

vector < int > luckyList;

void create(int r)
{
    // Ta tạo ra danh sách các số may mắn trong đoạn [l, r]
    luckyList.push_back(4); luckyList.push_back(7);
    for (int i = 0; i < luckyList.size() && luckyList[i] < r; ++i)
    {
        luckyList.push_back(luckyList[i] * 10 + 4);
        luckyList.push_back(luckyList[i] * 10 + 7);
    }
}

void solution(int l, int r)
{
    int totalSum = 0;

    while (l <= r)
    {
        int pivot = lower_bound(luckyList.begin(), luckyList.end(), l) - luckyList.begin();
        int left = l, right = r, nextPos;
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (mid <= luckyList[pivot])
                nextPos = mid, left = mid + 1;
            else
                right = mid - 1;
        }

        totalSum += luckyList[pivot] * (nextPos - l + 1);
        l = nextPos + 1;
    }

    cout << totalSum;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    
    create(r);
    solution(l, r);

    return 0;
}