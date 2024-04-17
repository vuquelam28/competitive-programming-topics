# Dominant

Cho một dãy nhị phân $A$. Một dãy con gồm các số hạng liên tiếp của $A$ được gọi là một dominant nếu như số bit $1$ của nó nhiều hơn số bit $0$.
	
Lấy ví dụ, với $A=100011011100,$ ta có các dominant là $011, 0110111$. Dominant được gọi là cực đại nếu nó có độ dài lớn nhất; ví dụ đối với dãy $A$ ở trên, dominant cực đại là $10001101110$.

***Yêu cầu:*** Cho dãy $A,$ hãy cho biết:
- Độ dài dominant cực đại.
- Số lượng dominant cực đại.

## Input

- Chứa duy nhất dãy nhị phân $A$.

## Constraints

- $|A| \le 3 \times 10^5;$ với $|A|$ là độ dài dãy $A$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $|A| \le 5000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Đưa ra hai số nguyên lần lượt là độ dài dominant cực đại và số lượng tương ứng, mỗi số cách nhau một dấu cách.

## Sample Input 1

```
100011011100
```

## Sample Output 1

```
11 1
```

## Sample Input 2

```
10000111000
```

## Sample Output 2

```
5 3
```

