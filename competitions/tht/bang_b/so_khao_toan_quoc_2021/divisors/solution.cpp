#include <bits/stdc++.h>
#define task "divisors."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxm = 26;
int M;
long long product = 1;
pair < int, int > prime[maxm], q[4];
vector < long long > expo[maxm], left_set, right_set;

void enter()
{
    cin >> M;

    for (int i = 1; i <= M; ++i)
        cin >> prime[i].first >> prime[i].second;

    for (int i = 1; i <= 3; ++i)
        cin >> q[i].first >> q[i].second;
}

void create_exponentiation(int max_value)
{
    for (int i = 1; i <= M; ++i)
    {
        expo[i].push_back(1);

        for (int j = 1; j <= prime[i].second && expo[i][j - 1] * prime[i].first <= max_value; ++j)
            expo[i].push_back(expo[i][j - 1] * prime[i].first);
    }
}

void recursion(int i, int limit, int max_value, vector < long long > &current_set)
{
    if (i > limit)
        return;

    if (product * expo[i][0] > max_value)
        return;

    for (int j = 0; j < (int)expo[i].size(); ++j)
    {
        product *= expo[i][j];

        if (i == limit)
            current_set.push_back(product);
        else
            recursion(i + 1, limit, max_value, current_set);

        product /= expo[i][j];
    }
}

void solution()
{
    // Create all exponentiations p[i]^j such that p[i]^j  does not exceed the greatest value of B
    int max_value = max(q[1].second, max(q[2].second, q[3].second));
    create_exponentiation(max_value);

    // Generate two sets of products can be formed by the prime factorization
    recursion(1, (M + 1) / 2, max_value, left_set);
    recursion((M + 1) / 2 + 1, M, max_value, right_set);
    sort(left_set.begin(), left_set.end());
    sort(right_set.begin(), right_set.end());

    if (right_set.empty()) // Separately handle the case that the prime factorization only consists of 1 prime.
        right_set.push_back(1);

    // Answer the 3 queries.
    for (int i = 1; i <= 3; ++i)
    {
        int res = 0;

        // For each generated product in the left set, find the position range [pos_l, pos_r] in the right set that can be paired with it
        // to create a product belonging to the range [A,B]. The product has a form of A <= x * y <= B.
        for (int j = 0; j < (int)left_set.size(); ++j)
        {
            int mul = left_set[j];
            if (mul > max_value)
                break;

            auto it1 = lower_bound(right_set.begin(), right_set.end(), (q[i].first + mul - 1) / mul);
            auto it2 = upper_bound(right_set.begin(), right_set.end(), q[i].second / mul) - 1;

            if (it1 != right_set.end()) // If at least one position exists, get the length of the segment which can be paired.
            {
                int pos_l = it1 - right_set.begin(), pos_r = it2 - right_set.begin();
                res += (pos_r - pos_l + 1);
            }
        }

        cout << res << endl;
    }
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}
