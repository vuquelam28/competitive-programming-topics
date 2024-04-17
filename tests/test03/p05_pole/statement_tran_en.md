# Power Pole

Electricity company XYZ is responsible for providing electricity for city VT. To provide the city with electricity, the company set up a system of $N$ power poles numbered from $1$ to $N,$ the $i$-$th$ pole has a height of $h_i.$ There are wires connecting pairs of adjacent power poles, which means the wires connect from pole $1$ to $2,$ from pole $2$ to $3,...,$ and from pole $N-1$ to $N$.

For the urban beauty, city VT decided to charge company XYZ a fee of $c\times |h_i - h_{i + 1}|$ (where $c$ is the cost per each unit of height difference between the two adjacent poles) for each two adjacent poles $i$ and $i+1$. Thus, the total fee company XYZ has to pay is:
$$S = \sum_{i = 1}^{N - 1}|h_i - h_{i + 1}|$$

To reduce the fee, the company leadership decided to choose the solution of increasing the heights of some power poles. However, the company has to pay an additional cost of $x^2$ to increase the height of the $i$-$th$ power pole by $x$ unit(s) .

***Task:*** Given $N,c$ and the initial heights $h_i \ (1 \le i \le N),$ help the company XYZ to calculate the minimum fee $S$ when the company implements the above solution of increasing the heights of power poles.

## Input

- The first line contains two integers $N, c,$ separated by a space.
- $N$ lines follow. The $i$-$th$ line contains the integer $h_i$ - the initial height of the $i$-$th$ power pole.

## Constraints

- $1 \le N\le 10^4$.
- $1 \le c \le 10^6$.
- $1 \le h_i \le 1000; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($30\%$ of the points): $N \le 10; h_i \le 3$.
- Subtask $2$ ($40\%$ of the points): $N \le 1000; h_i \le 1000$.
- Subtask $3$ ($30\%$ of the points): Original constraints.

## Output


- A single integer: the minimum fee that company XYZ has to pay city VT.

## Sample Input

```
5 2
2
3
5
1
4
```

## Sample Output

```
15
```

## Explanation

Increase the height of the $1st$ pole by $1$ unit, the $4th$ pole by $2$ units. Then, the heights of the poles are: $\{3, 3, 5, 3, 4\}$, respectively. The total fee the company has to pay is:
$$S = 2 \times (0 + 2 + 2 + 1) + 1^2 + 2^2 = 15$$


