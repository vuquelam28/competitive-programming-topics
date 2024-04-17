# Cedar - Bamboo Road (Easy Version)

There is a Cedar - Bamboo road on the tourist road of city X. It is a long straight road with cedar and bamboo trees along sides. Preparing for the upcoming festival, the organization board wants to select a segment on the Cedar - Bamboo road where there are at least $a$ cedar trees and $b$ bamboo trees. After the first day examining, the organization board obtained the position of each cedar and bamboo tree on the road. With limited budget, they want to find the shortest segment satisfying the given requirement.

***Task:*** Given $a, b$ and the positions of $n$ cedar - bamboo trees on the road, find the length of the shortest segment that has at least $a$ cedar trees and $b$ bamboo trees along sides.

## Input

- The first line contains three positive integers $n, a, b$.
- In $n$ following lines, the $i$-$th$ line contains two positive integers $d_i$ and $k_i \ (1 \le i \le n)$ where $d_i$ is the distance between the $i$-$th$ tree and the start of the road, $k_i=1$ if the $i$-$th$ tree is a cedar tree, $k_i=2$ if the $i$-$th$ tree is a bamboo tree

## Constraints

- $1 \le n \le 1000$.
- $a + b \le n$.
- $1 \le d_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- A single line contains one positive integer - the length of the shortest segment with at least $a$ cedar trees and $b$ bamboo trees.

## Sample Input 1

```
7 2 2
20 2
30 1
25 1
35 1
60 2
65 2
10 1
```

## Sample Output 1

```
35
```

## Explanation 1

The shortest segment found is from the cedar tree at the $30$ position to the bamboo tree at the $65$ position.
