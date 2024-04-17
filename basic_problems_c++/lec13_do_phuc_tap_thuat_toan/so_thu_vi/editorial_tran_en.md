# Interesting Number - Editorial

### Subtask 1

Use loop to loop over all numbers from $1$ to $n$ then check current number is **interesting** or not. If it is **interesting**, increase count variable by 1. Print the count variable.

### Subtask 2

Let's think: what properties do all interesting numbers have? Well, if a number $x$ does not end with $9$, we can say for sure that $S(x+1)=S(x)+1$, because the last digit will get increased. What if the number ends with $9$? Then the last digit will become $0$, so, no matter what happens to other digits, we can say that $S(x+1)$ will surely be less than $S(x)$.

So the problem asks us to count all numbers $1 \le x \le n$ with the last digit equal to $9$. It is not hard to see that the answer is equal to $⌊(n+1)/10⌋$.
