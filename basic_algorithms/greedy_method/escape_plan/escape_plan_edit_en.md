# Escape Plan - Editorial

Firstly, we need to handle some special cases:
- For the first $x$ hours, the distance Jack has run is $x \times v$ meters. If this distance is already larger than or equal to the distance from the castle to the beanstalk, the result is $0$.
- If $v_0 \le v,$ the giant can never catch Jack, so the result will also be $0$.

Now, we just need to apply the brute-force algorithm to iterate. Let $\text{diff} = v_0 - v,$ and $\text{already\_ran}$ be the distance Jack has run, so after $t = \frac{\text{already\_ran}}{\text{diff}}$ hours, the guard will be able to catch up with Jack. Then, one piece of jewel needs to be dropped (the result needs to be increased by $1$); the guard will pick that piece of jewel up, returning to the castle in $t$ hours and polishing the jewel in $y$ hours. During that period of time, Jack will run further by a distance of $v \times (t + y)$ meters. Repeat this algorithm until Jack reaches the beanstalk, and print the final result.
