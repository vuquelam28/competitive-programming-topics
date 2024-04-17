# Fix The Roads - Editorial

### Subtask 1

For each query $(u_i, v_i),$ we change the type of asphalt on the $u_i$-$th$ segment to $v_i$ and iterate through all the road segments again to calculate the roughness.

Complexity: $O(n \times q)$.

### Subtask 2

Let $\text{roughness}$ be the initial roughness of the entire route. This value can be easily calculated at the beginning using one loop.

Considering a query $(u_i, v_i),$ a change in the roughness only happens in some certain cases:

- If the change takes place at the beginning or the end of the route ($u_i = 1$ hoặc $u_i = n$).
- If the $u_{i - 1}$-$th$ and $u_{i + 1}$-$th$ road segments have the same type of asphalt.
- If the $u_{i - 1}$-$th$ and $u_{i + 1}$-$th$ road segments have different types of asphalt.

In those $3$ cases, changing $u$ will lead to a change in the entire route's roughness (hint: values of changes are in the set $\{-2, -1, 0, 1, 2\}$). The readers need to calculate and figure out the rule themselves.

Complexity: $O\big(\text{max}(n, q)\big)$.