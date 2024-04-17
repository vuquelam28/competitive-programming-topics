# Perfect Number Pair - Editorial

***Observation:*** The way to transform surely exists, since we can get the number $N$ after a maximum of $(N - 1)$ steps by continually turning the $(1,1)$ pair into $(1, x + 1)$, where $x = \{1, 2,..., N - 1\}$. The problem now is, will there be a better way to transform? We will try turning the $(1, 1)$ pair into $(x, N)$ pairs, where $(1 \le x < N)$, to see which way is better.

Firstly, let's consider a simple approach: for each $(a, b)$ pair, the number of operations to generate it equals the number of operations to generate the $(a, b - a)$ pair plus $1$ if $a < b,$ otherwise equals the number of operations to generate the $(a - b, b)$ pair plus $1$. Thus, we can use a recursive function in the form of $\text{DFS}$ algorithm to split the $(x, N)$ problem into subproblems. The code will be as follows:

```cpp
void dfs(int a, int b, int step) // a,b and the number of operations to generate the pair
{
    if (step > res) // The number of operations exceeds the final result -> no need to continue
        return;

    if (a == 1 && b == 1)
    {
        res = min(res, step);
        return;
    }

    // If one of the two numbers generate a number less than 1, the way to transform the initial (a,b) pair doesn't exist.
    if (a < 1 || b < 1) 
        return;

    if (a > b)
        dfs(a - b, b, step + 1);
    else if (b > a)
        dfs(a, b - a, step + 1);   
}
```

This approach, although it can solve the problem, will exceed the computer's memory due to a large number of recursive operations. We need a better approach. Observe that, if $a < b$, the number of operations exactly equals sum of the answer for the $(b \ \text{mod} \ a, a)$ problem and $\left \lfloor{\frac{b}{a}} \right \rfloor$ - the number of operations to turn $(b \% a, a)$ into $(a, b)$. Thus, we can directly call the recursive function on this problem to reduce the number of operations. Apply this recursive function on all $(x, N)$ pairs, we will get the minimum result. More details can be found in solution!