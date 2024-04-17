#include <bits/stdc++.h>
#define int long long

using namespace std;
int v, v0, x, y, z;

void enter()
{
    cin >> v >> v0 >> x >> y >> z;
}

void solution()
{
    double already_ran_dist = v * x; // Position of the boy after first x hours.

    if (already_ran_dist >= z || v0 <= v)
    {
        cout << 0;
        return;
    }

    int diff = v0 - v, res = 0;
    while (true)
    {
        // Number of hours that the guard catch the boy.
        double t = (double) already_ran_dist / diff;
        already_ran_dist += t * v; // Position of the boy after t more hours.

        // If the boy reached the destination, break here.
        if (already_ran_dist >= z)
            break;
        else
        {
            // The boy throws a jewel when he is catch by the guard.
            ++res;

            // The guard will lost y hours to polish the jewel, and t hours to brings the jewel back to his castle.
            // So, the boy can run v * (y + t) more meters. After that, the guard will start at his castle and try to
            // catch the boy from the beginning.
            already_ran_dist += v * (y + t);
        }
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}