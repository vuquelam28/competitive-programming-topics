# Con Đường Tùng - Trúc (Bản Dễ)

Trên con đường du lịch ở thành phố X có một con đường Tùng - Trúc. Đó là một con đường dài và thẳng, hai bên đường trồng rất nhiều cây tuyết tùng và cây trúc. Để chuẩn bị cho lễ hội sắp tới, ban quản lý muốn chọn ra một đoạn đường trên con đường Tùng - Trúc mà ở đó có tối thiểu $a$ cây tuyết tùng và $b$ cây trúc. Sau ngày đầu khảo sát, ban tổ chức có thông tin vị trí của từng cây tùng và cây trúc trên con đường. Với kinh phí hạn hẹp, ban tổ chức muốn tìm ra con đường ngắn nhất thỏa mãn điều kiện đưa ra.

***Yêu cầu:*** Cho $a, b$ và vị trí của $n$ cây tùng - trúc trên con đường. Hãy tìm độ dài đoạn đường có độ dài ngắn nhất mà dọc theo nó có ít nhất $a$ cây tùng và $b$ cây trúc?

## Input

- Dòng đầu tiến chứa ba số nguyên dương $n, a, b$. 
- Dòng thứ $i$ trong $n$ dòng tiếp theo chứa hai số nguyên dương $d_i$ và $k_i \ (1 \le i \le n)$ với $d_i$ là khoảng cách tính từ cây thứ $i$ tới vị trí đầu con đường, $k_i=1$ nếu cây thứ $i$ là cây tùng, $k_i=2$ nếu cây thứ $i$ là cây trúc.

## Constraints

- $1 \le n \le 1000$.
- $a + b \le n$.
- $1 \le d_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất chứa một số nguyên dương là độ dài đoạn đường ngắn nhất chứa ít nhất $a$ cây tùng và $b$ cây trúc. Nếu không tồn tại đoạn đường như vậy thì đưa ra $-1$.

## Sample Input 1

```
7 2 2
20 2
30 1
25 1
35 1
60 2
65 2
10 1
```

## Sample Output 1

```
35
```

## Explanation 1

Đoạn đường ngắn nhất tìm được là từ cây tùng ở vị trí $30$ đến cây trúc ở vị trí $65$.
