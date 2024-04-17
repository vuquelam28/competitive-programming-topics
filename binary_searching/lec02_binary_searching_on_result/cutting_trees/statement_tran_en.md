# Cutting Trees

A woodcutter went into the forest to cut some wood to build house. The forest has $n$ trees with the heights of $h_1, h_2,\dots, h_n$ respectively. To save effort, the woodcutter created a power-saw allowing one cut at a specific height of $h$ (above the ground) through all $n$ trees. Then, the amount of wood obtained is the total length of all tree segments cut down (yellow areas):

<center>

![](https://cdn.ucode.vn/uploads/2247/images/OVRhmjWQ.png)
</center>

To build his desired house, the minimum amount of wood needed by the woodcutter is $m$. However, he also doesn't want to cut too much wood, since the cut trees will die if the wood is cut without use and he doesn't have the heart to do that. Therefore, the woodcutter will try to cut at the highest height possible, so that the amount of wood being cut is reduced.

***Task:*** Determine $h$ - the highest height the woodcutter can perform the cut such that the total amount of wood obtain is not less than $m$.

## Input

- The first line contains two positive integers $n, m$ - number of trees and minimum amount of wood to be cut.
- The second line contains $n$ integers $h_1, h_2, \dots, h_n$ separated by spaces.

## Constraints

- $1 \le n, m \le 10^6$.
- $1 \le h_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $1 \le n, m, h_i \le 100$.
- Subtask $2$ ($60\%$ of the points): Original constraints.

## Output

- Print an integer: the highest height of $h$ found. In case the amount of wood needed cannot be obtained, print $0$.

## Sample Input 1

```
4 7
20 15 10 17
```

## Sample Output 1

```
15
```

## Explanation 1

With the height of $15,$ the amount of wood cut from the trees will be $5 + 0 + 0 + 2 = 7,$ which is enough to meet the requirement. If the woodcutter cut at a height higher than $15,$ he will not be able to obtain an amount of wood of $7$.