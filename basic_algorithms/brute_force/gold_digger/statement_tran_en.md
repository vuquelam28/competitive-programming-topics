# Gold Digging

Ti is playing a game of "digging for gold", which is different from the familiar gold mining game that we all know.

In this game, gold is spread all over the map, and Ti's job is just to pick up gold all over that map. But it's not as simple as we think, on the map there are many guards on guard duty. 

A sentinel's sentinel range is the row and column that this soldier is standing in. In other words, Ti is not allowed to pick up gold at the rows and columns with guards.

<center>

![](https://i.ibb.co/JHcv7QT/Screen-Shot-2020-03-01-at-2-12-50-PM.png)
</center>

Because time is not much, so Ti does not want to waste time collecting gold, but can switch to another level if the amount of gold collected from this map is too small.

***Tasks:*** Help Ti calculate the number of cells in the map that he can go to and pick up gold?

## Input

- The first line contains the number of test cases of the problem called $T$ .
- For each test case, the format is given as following:

	- The first line contains two numbers $R, C$  describing the map size.
	- Next is the size matrix $R \times C$. Guards are marked as $1,$ cells without guards are marked as $0$.

## Constraints

- $1 \le T \le 100$.
- $1 \le m, n \le 200$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $T \le 10; m, n \le 50$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- The result of each test case is printed on 1 line: Start with the character `#`, followed by the ordinal number of that test case, followed by a space, and finally the result of that test case.

## Sample Input 1

```
2
3 3
1 0 0
0 1 0
0 0 0
4 4
1 0 0 1
0 1 1 0
0 0 0 0
0 0 0 0
```

## Sample Output 1

```
#1 1
#2 0
```

## Sample Input 2

```
1
5 5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
```

## Sample Output 2

```
#1 16
```

