# Fence Posts - Editorial

Firstly, we will find the positions of those incorrect fence posts in the original fence. The $i$-$th$ post is considered incorrect if:

- $i$ is odd but $c_i \ge c_{i + 1}$.
- $i$ is even but $c_i \le c_{i + 1}$.

Use a `while` loop to find all the incorrect positions. Let $x$ be the number of incorrect positions, and divide $x$ into these cases:

- $x > 6$.
- $3 < x \le 6$.
- $x = 3$ or $x = 2$

Why can't $x$ be $1$? Because, if the $i$-$th$ position is incorrect, the $i + 1$-$th$ position is obviously incorrect either. However, if the $i$-$th$, $i + 1$-$th$ and $i+2$-$th$ positions are all incorrect, there are $3$ incorrect positions. Thus, the case where $x = 1$ does not exist.

Now, let's see why there are such three cases:

- If $x > 6$: When swapping two positions, there will be at most $6$ affected positions regarding whether they are greater - smaller compared to surrounding positions. Therefore, if $x > 6,$ surely there are no ways to make the original fence perfect.
- If $3 < x \le 6$: When swapping a correct and an incorrect position, there will be at most $3$ positions can be changed into correct, or if it's worse, the number of incorrect positions will increase (the correct position became incorrect). Thus, in this case, we need to choose two incorrect positions and swap them. Since the number of incorrect positions is only $3, 4$ or $5,$ we can try swapping every pair of positions and checking whether that option is valid.
- If $x = 2$ or $x = 3$: An incorrect position can be swapped with every other position in the array, since this operation can affect three positions. We will try all swapping options and check if the fence is perfect or not (note that it is unnecessary to iterate through the whole array to check, instead just check those affected positions to save time).

Then, we got an approach with a complexity of $O(m)$.