# Fix The Roads

A route consisting of $n$ road segments is being built in an urban area. The $i$-$th$ segment is currently covered with a type of asphalt numbered $t_i$.

***A road section*** is defined as a contiguous array of road segments covered with the same type of asphalt, and the left and right sections of its (if there exists one) are covered with different type(s). The entire route's roughness is the total number of road sections on the route.

During the construction, the contractor issues $q$ announcements about fixing the roads, each of which contains two integers $u, v$ indicating changing the type of asphalt on the $u$-$th$ road segment to $v$.
 
***Task:*** After each announcement, calculate the roughness of the current route. Note that the effect of the previous changes remains the same for the next ones.

## Input

- The first line contains the positive integer $n$ - number of road segments of the entire route.
- The second line contains $n$ positive integers $t_1, t_2, \dots, t_n$ separated by spaces - types of asphalt with which the initial road segments are covered.
- The third line contains the positive integer $q$ - number of announcements about fixing the road.
- $q$ lines follow. The $i$-$th$ contains two positive integers $u_i, v_i$ - the $i$-$th$ time of fixing the road will change the type of asphalt on the $u_i$-$th$ road segment to $v_i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le q \le 10^3$.
- $1 \le t_i, u_i, v_i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ of the points): $1 \le n \le 10^3; 1 \le q \le 50$.
- Subtask $2$ ($50\%$ of the points): Original constraints.

## Output

- Print $q$ lines. The $i$-$th$ line contains one integer - the roughness of the route after the $i$-$th$ change.

## Sample Input 1

```
13
1 1 1 1 2 2 2 2 2 3 3 4 4
2
7 4
11 1
```

## Sample Output 1

```
6
7
```

## Explanation 1

At the beginning, there were $n = 13$ road segments with the types of asphalt being: $[1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 4]$. The roughness was $4$.

There are $2$ announcements about fixing the roads:

- The first announcement is $(7, 4),$ which means the type of asphalt on the $7$-$th$ segment to $4$. Therefore, the road segments after fixing will be: $[1, 1, 1, 1, 2, 2, 4, ,2, 2, 3, 3, 4, 4]$. After the first announcement, the route's roughness is $6$.
- The second annoucement is $(11,1),$ which means the type of asphalt on the $11$-$th$ segment to $1$. Therefore, the segments after fixing will be: $[1, 1, 1, 1, 2, 2, 4, ,2, 2, 3, 1, 4, 4]$. After the announcement, the route's roughness will be $7$.