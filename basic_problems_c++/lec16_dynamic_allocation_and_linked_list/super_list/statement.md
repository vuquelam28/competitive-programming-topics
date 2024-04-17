# Super List

Cho $n$ danh sách liên kết, danh sách thứ $i$ được gọi là $S_i$ và có độ dài $a_i$. Bạn có một danh sách $T$ ban đầu rỗng và cần làm $n$ thao tác sau: Thao tác thứ $i$ được gán bằng $c_i;$ nếu $c_i = 0$ bạn cần chèn $S_i$ vào đầu của $T,$ ngược lại nếu $c_i = 1$ bạn cần chèn $S_i$ vào cuối của $T$.

***Yêu cầu:*** Hãy in ra $T$ sau $n$ thao tác trên?

## Input

- Dòng đầu tiên chứa một số nguyên dương $n$ miêu tả số danh sách liên kết.
- Từ dòng thứ hai tới dòng thứ $2n+1$ có dạng:
    - Dòng thứ $2i$ miêu tả $a_i$.
    - Dòng thứ $2i+1$ gồm $a_i$ số nguyên dương miêu tả $S_i$.
- Dòng tiếp theo gồm $n$ số $c_i$ miêu tả thao tác.

## Constraints 

- Các số trong $S_i$ đều là số nguyên trong khoảng $[0,10^9]$.
- $1 \le n \le 100$.
- $1 \le a_i \le 200; \forall i: 1 \le i \le n$.

## Output

- Dòng đầu tiên in ra số lượng phần tử của $T$.
- Dòng thứ hai in ra các phần tử của $T$.

## Sample Input 1

```
4
3
1 4 2
2
1 5
3 
5 2 1
2
2 6
1 0 0 1
```

## Sample Output 1

```
10
5 2 1 1 5 1 4 2 2 6
``` 