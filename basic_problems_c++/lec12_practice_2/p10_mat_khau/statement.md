# Mật Khẩu

Bờm tham gia một kỳ thi lập trình của công ty XYZ tổ chức và đã giành giải nhất. Công ty trao phần thưởng là 100.000.000VNĐ cho Bờm, kèm theo một phần mềm game cực kỳ thú vị. Tuy nhiên, phần mềm game mà công ty XYZ gửi tới lại có chứa một mật khẩu để mở khóa, để sở hữu game này, Bờm bắt buộc phải giải được mật khẩu của game.

Công ty XYZ đã gửi cho Bờm một gợi ý dưới dạng một xâu kí tự $S$ chỉ gồm các chữ cái latin in thường hoặc in hoa, và các chữ số từ $0$ tới $9$. Theo đó, mật khẩu của game chính là tổng các số trong xâu kí tự $S$.

***Yêu cầu:*** Hãy giúp Bờm tìm ra mật khẩu của game?

## Input

- Một dòng duy nhất chứa xâu kí tự $S$.

## Constraints

- $1 \le |S| \le 1000;$ với $|S|$ là độ dài xâu $S$.
- Các số trong xâu $|S|$ có giá trị không vượt quá $10^{9}$ và không bao giờ bắt đầu bằng chữ số $0$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): Các số trong xâu $S$ chỉ có tối đa $1$ chữ số.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số nguyên duy nhất là mật khẩu của game tìm được. Nếu trong xâu $S$ không tồn tại chữ số thì in ra $0$.

## Sample Input 1

```
15abD6y40
```

## Sample Output 1

```
61
```


