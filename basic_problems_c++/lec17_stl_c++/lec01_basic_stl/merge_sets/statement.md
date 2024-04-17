# Hợp Nhất Đoạn

Cho $n$ đoạn số nguyên có dạng $[a, b]$ - trong đó $a$ là điểm bắt đầu và $b$ là điểm kết thúc của đoạn trên trục số. Hai đoạn số nguyên được gọi là chồng lên nhau nếu như chúng có ít nhất một điểm chung. Khi đó, hai đoạn này có thể hợp lại thành một đoạn duy nhất là $\big[\text{min}(a, c), \text{max}(b, d)\big]$.

***Yêu cầu:*** Hãy hợp nhất các đoạn số nguyên cho trước thành ít đoạn nhất có thể?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên $a_i, b_i$ - thể hiện đoạn số nguyên thứ $i \ (1 \le i \le n)$.

## Constraints

- $1 \le n \le 1000$.

## Output

- In ra các đoạn số nguyên đã được hợp nhất, mỗi đoạn trên một dòng theo thứ tự tăng dần của điểm bắt đầu.

## Sample Input 1

```
5
1 3
10 15
2 5
3 4
5 8
```

## Sample Output 1

```
1 8
10 15
```

