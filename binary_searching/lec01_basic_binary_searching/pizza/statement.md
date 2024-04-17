# Mua Bánh Pizza

Một nhóm bạn gồm $n$ người đi vào cửa hàng Pizza Hut để mua bánh về ăn. Cửa hàng hôm nay có chương trình đồng giá $m$ đô la cho một chiếc bánh pizza, nhưng kích thước bánh lại được tăng gấp đôi lên. Do đó, nhóm bạn quyết định sẽ ghép thành từng cặp, mỗi cặp góp tiền lại mua một chiếc bánh để cả hai cùng ăn.

Tuy nhiên, do nhân viên cửa hàng không có tiền trả lại, nên số tiền của hai người gộp lại phải đúng bằng $m$ thì mới có thể mua bánh. Biết rằng mỗi người đều mang theo một số tiền, và không có hai người nào mang theo số tiền giống nhau.

***Yêu cầu:*** Hãy đếm số lượng cặp có thể mua được bánh pizza?

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ - số lượng test cases.
- $t$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case theo cấu trúc:

    - Dòng đầu tiên chứa hai số nguyên $n$ và $m$ - số lượng người trong nhóm và giá tiền một chiếc pizza.
    - Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ - số tiền mỗi người mang theo.

- Do đây là một bài toán đặc biệt, nên các giá trị tiền có thể là số âm.

## Constraints

- $1 \le t \le 100$.
- $1 \le n \le 10^5$.
- $|m| \le 2 \times 10^9$.
- $|a_i| \le 2 \times 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $t = 1; 1 \le n \le 100$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ứng với mỗi test case, in ra một số nguyên trên một dòng là số cặp có thể mua được bánh pizza.

## Sample Input 1

```
2
4 12
9 -3 4 3
5 -9
-7 3 -2 8 7
```

## Sample Output 1

```
1
1
```

