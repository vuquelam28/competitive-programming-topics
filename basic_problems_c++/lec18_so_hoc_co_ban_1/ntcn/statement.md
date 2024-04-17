# Nguyên Tố Cùng Nhau

Hai số được gọi là nguyên tố cùng nhau nếu ước số chung lớn nhất của chúng là $1$.

***Yêu cầu:*** Cho dãy số nguyên $A$ gồm $N$ phần tử $a_1,a_2,…,a_N$. Hãy đếm số cặp số nguyên dương và nguyên tố cùng nhau trong dãy số?

## Input

- Dòng đầu tiên chứa số tự nhiên $N$ – số lượng phần tử của dãy số.
- Dòng thứ hai chứa $N$ số nguyên $a_1,a_2,…,a_N$.

## Constraints

- $1≤N≤1000$.
- $0≤a_i≤10^9;\forall i: 1≤i≤N$.

## Subtasks 

- Subtask $1$ ($40\%$ số điểm): $N \le 100, a_i \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số lượng các cặp số nguyên dương và nguyên tố cùng nhau nếu có, còn ngược lại in ra số $0$.

## Sample Input

```
5
2 5 3 6 8
```
## Sample Output

```
6
```

## Explanation

Có $6$ cặp số nguyên tố cùng nhau là: $(2,5); (2,3); (5,3); (5,6); (5,8); (3,8)$.

