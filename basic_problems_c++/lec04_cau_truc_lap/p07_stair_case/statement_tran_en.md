# Staircase

A staircase has $n$ steps. The bottom step will have a size of $n$ and the size will decrease by $1$ for each step moving upwards. Each unit of the step size will be represented by a character `#`. For example, the below image illustrates a staircase with $4$ steps:

```
   #
  ##
 ###
####
```

Accordingly, the bottom step will be printed close to the left margin; each step above will be indented by a space compared to the step underneath.

## Input

- A single line contains a positive integer $n$.

## Constraints

- $1 \le n \le 100$.

## Output

- Print the stair with $n$ steps as the given rule.

## Sample Input 1

```
5
```

## Sample Output 1

```
    #
   ##
  ###
 ####
#####
```

