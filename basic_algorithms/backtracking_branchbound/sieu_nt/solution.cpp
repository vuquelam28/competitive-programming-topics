#include <bits/stdc++.h>

using namespace std;

const int digits[6] = {1, 2, 3, 5, 7, 9};
int n;
vector < int > res;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

void backtrack(int i, int number)
{
    if (i > n)
        res.push_back(number); 
    else
    {
        for (int j = 0; j <= 5; ++j)
            if (is_prime(number * 10 + digits[j]))
                backtrack(i + 1, number * 10 + digits[j]);
    }
}

main()
{
    cin >> n;
    backtrack(1, 0);
    
    cout << res.size() << endl;
    for (int e: res)
        cout << e << endl;

    return 0;
}