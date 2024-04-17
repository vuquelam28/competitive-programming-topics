# Escape Plan

We all know the story "Jack and the Beanstalk". Thanks to the magic beans, the poor boy Jack climbed up the beanstalk and reached the castle of the giants. However, due to negligence, Jack was caught by the castle's guard. With an IQ of $200,$ Jack not only escaped successfully but also brought with him a pile of precious jewels from the castle. Unfortunately, the guard is also quite cunning: just $x$ hours after Jack's escape, he detected and immediately chased after him. Jack runs in a straight line, at a speed of $v$ meters/hour, the guard is running after him at a speed of $v_0$ meters/hour. The distance from the castle to Jack's beanstalk is $z$ meters.

Although the guard runs really fast, his weakness is not being so smart. Whenever he catches Jack, Jack will drop one piece of jewel among the pile he stole, so that he will stop to pick the jewel up, bring it back to the castle, and continue to spend $y$ hours polishing that jewel before starting to chase Jack again from the castle. Note that, if the guard catches up with Jack exactly when he reaches the magic beanstalk, it is considered that Jack has successfully escaped.

***Task:*** Determine the minimum number of jewels Jack needs to drop to safely reach the magic beanstalk.

## Input

- $5$ integers $v, v_0, x, y, z,$ each to be on one separated line.

## Constraints

- $1 \le v, v_0 \le 100$.
- $1 \le x, y \le 10$.
- $1 \le z \le 1000$.

## Output

- A single integer: the minimum number of jewels Jack needs to drop.

## Sample Input 1

```
1 2 1 1 8
```

## Sample Output 1

```
1
```

## Sample Input 2

```
1 2 1 1 10
```

## Sample Output 2

```
2
```
