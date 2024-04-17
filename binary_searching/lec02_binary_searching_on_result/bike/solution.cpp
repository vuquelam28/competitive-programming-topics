#include <bits/stdc++.h>
#define int long long
#define task "Bike."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

const int maxn = 1e5 + 10;
int n, m, common_money, own_money[maxn], rent_cost[maxn];

void enter()
{
    cin >> n >> m >> common_money;

    for (int i = 1; i <= n; ++i)
        cin >> own_money[i];
    for (int i = 1; i <= m; ++i)
        cin >> rent_cost[i];
}

bool check(int limit)
{
    
    // Try letting limit people with the most money rent limit bikes with the least rent, the person with more money
    // rent the bike with higher rent
    int plus_money = 0;
    for (int i = 1; i <= limit; ++i)
        plus_money += max(0LL, rent_cost[limit - i + 1] - own_money[i]);

    return (plus_money <= common_money);
}

void solution()
{
    // Sort the programmers in descending order of their private money. Sort the bikes in ascending order of their rents.
    sort(own_money + 1, own_money + n + 1, greater < int >());
    sort(rent_cost + 1, rent_cost + m + 1);

    // Use binary searching to find the maximum number of people being able to rent bikes.
    int l = 0, r = min(n, m), maximum_people = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(mid))
        {
            maximum_people = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    // To minimize the amount of money paid by the programmers, try to use all of the shared money first.
    // If it is not enough, use the private money of the programmers to make up for the missing amount.
    int total_self_paid = common_money;
    for (int i = 1; i <= maximum_people; ++i)
        total_self_paid -= rent_cost[i];
    total_self_paid = max(-total_self_paid, 0LL);

    cout << maximum_people << ' ' << total_self_paid;
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}