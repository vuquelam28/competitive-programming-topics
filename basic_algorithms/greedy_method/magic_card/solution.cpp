#include <bits/stdc++.h>

using namespace std;

const int maxn = 101;
int n, m, attacking[maxn];
vector < int > atk_cards, def_cards;

void enter()
{
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        string state;
        int power;
        cin >> state >> power;

        if (state == "ATK")
            atk_cards.push_back(power);
        else
            def_cards.push_back(power);
    }

    for (int i = 1; i <= m; ++i)
        cin >> attacking[i];
}

// Plan 1: Try to kill all the cards of enemy.
int plan1()
{
    int damage = 0;
    vector < bool > is_picked(m + 1, false);

    // Firstly, try to kill all the enemy's cards which are in def position. If we cannot
    // kill all the enemy's defensing cards, total damage will be 0.
    int pivot = 1;
    for (int power: def_cards)
    {
        while (pivot <= m && attacking[pivot] <= power)
            ++pivot;

        if (pivot > m)
            return 0;

        is_picked[pivot] = true;
        ++pivot;
    }

    // Next, pick k cards with highest power and attack the remain cards of enemy.
    pivot = m;
    for (int i = atk_cards.size() - 1; i >= 0; --i)
    {
        while (pivot >= 1 && (attacking[pivot] < atk_cards[i] || is_picked[pivot]))
            --pivot;

        if (pivot < 1)
            return 0;

        damage += (attacking[pivot] - atk_cards[i]);

        is_picked[pivot] = true;
        --pivot;
    }

    // Lastly, if there are any remaining cards (and all the attacking cards were destroyed), the enemy
    // will receive damage equals to sum of those power.
    for (int i = 1; i <= m; ++i)
        if (!is_picked[i])
            damage += attacking[i];

    return damage;
}

// Plan 2: Using attacking cards which have power as much as possible, then attack the cards
// which are in attacking mode and also have power as much as possible. Note that we only try
// to attack the cards which are in attacking mode, but leave the cards which are in defense mode,
// that means we are not going to kill all the enemy's card.
int plan2()
{
    int damage = INT_MIN;

    // Suppose that we make k attacks, then we must choose k cards with highest power to attack
    // k cards with lowest power of enemy.
    for (int k = 1; k <= min(m, (int) atk_cards.size()); ++k)
    {
        int sum1 = accumulate(atk_cards.begin(), atk_cards.begin() + k, 0);
        int sum2 = accumulate(attacking + m - k + 1, attacking + m + 1, 0);

        damage = max(damage, sum2 - sum1);
    }

    return damage;
}

void solution()
{
    sort(attacking + 1, attacking + m + 1);
    sort(atk_cards.begin(), atk_cards.end());
    sort(def_cards.begin(), def_cards.end());

    cout << max(plan1(), plan2());
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}