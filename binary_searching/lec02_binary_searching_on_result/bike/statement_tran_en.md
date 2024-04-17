# Renting Bikes

The **DKEDTECH** content team consists of $n$ programmers, all of whom are on good terms and close to one another as siblings. Idol Hai Le - the team manager - is an energetic person, who often organizes picnics for everyone to bond. For this picnic, she decided to turn form of the picnic into renting bikes for the whole team to ride together. The bike rental shop has $m$ bikes; the $i$-$th$ has a rent of $b_i \ (1 \le i \le m)$. Ms. Le asked the company for an amount of shared money $C,$ but each team member also brings an amount of private money, $a_i \ (1 \le i \le n)$, just in case. The shared money can be divided to each member to use at will, but the private money of each member can only be used by that member.

Ms. Le will help each member to rent a bike. Being a person who loves her colleagues, Ms. Le wants everyone to hang out yet spend the least amount of money possible. If there is someone not being able to rent the bike, she will have to consider another plan (which is not specified).

***Task:*** Calculate the maximum number of team members being able to rent bike, and the minimum total amount of money they have to pay on their own.

## Input

- The first line contains three positive integers $n, m, C$ - the number of members in the content team, the number of bikes in the shop, and the amount of money Ms. Le got from the company.
- The second line contains $n$ positive integers $a_1, a_2,..., a_n$ - the amount of private money each member brings.
- The third line contains $m$ positive integers $b_1, b_2,..., b_m$ - the rent of the $m$ bikes.
- Numbers on the same line are separated by spaces.

## Constraints

- $1 \le n, m \le 10^5$.
- $0 \le C \le 10^9$.
- $1 \le a_i \le 10^4; \forall i: 1 \le i \le n$.
- $1 \le b_i \le 10^9; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($30\%$ of the points): $1 \le n, m \le 100$.
- Subtask $2$ ($70\%$ of the points): Original constraints.

## Output

- Two integers $x$ and $y$ being the maximum number of members being able to rent bikes and the minimum total amount of money they have to pay on their own, respectively; separated by a space. In the case that no programmers can rent bikes, $x = y = 0$.

## Sample Input 1

```
2 2 10
5 5
7 6
```

## Sample Output 1

```
2 3
```

## Explanation 1

The two programmers only need to pay a total amount of $3,$ adding the shared money of $10,$ to be able to rent the two bikes.

## Sample Input 2

```
1 1 2
1
2
```

## Sample Output 2

```
1 0
```

## Explanation 2

The shared money is enough to rent bikes, so no one needs to spend their private money.