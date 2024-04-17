# Lật Bánh

Trong kỳ nghỉ hè, An đăng ký vào một lớp học nấu ăn. Biết An là một người giỏi Tin học, bếp trưởng Chef đố An một câu đố: Trên chảo có $N$ chiếc bánh đang nướng, mỗi chiếc bánh đều có hai mặt, trong đó một mặt chín (kí hiệu dấu `+`) và một mặt chưa chín (kí hiệu dấu `-`). An được giao nhiệm vụ lật những chiếc bánh này, mỗi lần lật bánh cậu chỉ được phép lật đúng $K$ chiếc bánh liên tiếp nhau. Mục tiêu mà bếp trưởng Chef đề ra là An phải lật được tất cả mặt chín của những chiếc bánh lên trên.

***Yêu cầu:*** Hãy giúp An đếm số lần lật bánh ít nhất cậu cần thực hiện để lật hết mặt chín của những chiếc bánh lên trên?

## Input

- Dòng đầu tiên là số nguyên dương $T$ – số lượng testcases.
- $T$ dòng tiếp theo, mỗi dòng chứa một xâu kí tự $S$ thể hiện mặt bên trên của những chiếc bánh hiện tại; sau đó là số nguyên dương $K$ cách một dấu cách.

## Constraints

- $1≤T≤20$.
- $1≤K≤|S|≤10^3,$ với $|S|$ là độ dài của chuỗi $S$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1≤T≤20;|S|≤10$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Trên $T$ dòng, dòng thứ $i$ ghi số thao tác ít nhất tương ứng với testcase thứ $i$. Nếu không tồn tại cách lật bánh như bếp trưởng Chef yêu cầu, thì đưa ra thông báo **IMPOSSIBLE**.

## Sample Input

```
3
---+-++- 3
+++++ 4
-+-+- 4
```

## Sample Output

```
3
0
IMPOSSIBLE
```