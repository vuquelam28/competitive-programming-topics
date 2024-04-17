# IPV4 Address

Surely all of us are familiar with the IPV4 addresses - Internet Protocol version 4. An IPV4 address is represented by four $8$-bit integers, separated by `.`, for example: `192.168.1.1` or `255.255.255.0`. Therefore, a string $s$ is an IPV4 address if it meets the following conditions:
- $s$ consists of four integers with values in the range $[0, 255]$.
- Two integers are separated by a `.`

***Task:*** Input a string $s,$ check whether it is a valid IPV4 address.

## Input

- A single line contains string $s$ consisting of only integers separated by `.`.

## Constraints

- $|s| \le 100,$ where $|s|$ is the length of string $s$.
- The integers in $s$ do not exceed $10^{18}$.

## Output

- Print `Valid` if $s$ is a valid IPV4 address, otherwise print `Invalid`.

## Sample Input 1

```
192.168.1.1
```

## Sample Output 1

```
Valid
```

## Sample Input 2

```
1001.255.255.78
```

## Sample Output 2

```
Invalid
```