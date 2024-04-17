# The Superthief

Arsène Lupin is a famous fictional character in the detective series by the French writer Maurice Leblanc. In the series, Lupin is a super thief with amazing disguise and theft skills. He often disguises himself as a gentleman and steals things from the rich, especially stingy ones.

This time, Lupin managed to sneak into the storage of antiques of a notoriously stingy landlord. This storage of antiques has a collection of ceramic vases consisting of $N$ shelves, each contains a certain number of ceramic vases in a row. Each vase has its own value. Within each shelf, the vases can only be taken out in a sequential order from the two ends (meaning ones in the middle of the shelf cannot be removed). Once a vase is taken, the next vases beside it can be accessed, and the the one taken out cannot be returned to the shelf.

Lupin really hates this landlord, so he decided to smash the landlord's collection of ceramic vases. However, due to time constraints, Lupin only chooses $M$ vases to smash (of course the way he takes the vases needs to follow the above rule). To save time, when taking one vase from the shelf, Lupin will immediately smash that one, then choose the next one, and so on, until there have been enough $M$ vases smashed.

***Task:*** Determine the maximum possible total value of the vases smashed by Lupin, if he smashes exactly $M$ vases.

## Input

- The first line contains two positive integers $N, M$ - the number of shelves containing ceramic vases and the number of vases Lupin will smash. 
- $N$ lines follow. The $i$-$th$ line describes the ceramic vases on the $i$-$th$ shelf:
    - The first line contains the positive integer $k_i$ - the number of vases on the $i$-$th$ shelf.
    - The second line contains $k_i$ integers $v_1, v_2,..., v_{k_i}$ - values of the vases - separated by spaces.
- The total number of vases on the shelves is guaranteed to be at least $M$.

## Constraints

- $1 \le N \le 100$.
- $1 \le M \le 10^4$.
- $1 \le k_i \le 100; \forall i: 1 \le i \le N$.
- $1 \le v_j \le 100; \forall j: 1 \le j \le k_i$.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $N, M \le 10; k_i \le 10$.
- Subtask $2$ ($60\%$ of the points): Original constraints.

## Output

- A single integer: the maximum possible total value of the vases Lupin will smash.

## Sample Input

```	
2 3 
3 
3 7 2 
3 
4 1 5
```

## Sample Output

```
15
```

## Explanation

Choose the first two vases on the first shelf and the last vase on the second shelf; the total value of vases smashed is $15$.