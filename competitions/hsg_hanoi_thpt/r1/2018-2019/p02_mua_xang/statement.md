# Mua Xăng

Để thay đổi không khí sau những ngày làm việc căng thẳng, An dự định sẽ đi du lịch trong $n$ ngày bằng chiếc xe riêng của mình. Ngày thứ $i,$ chiếc xe cần $a_i$ lít xăng. Giá bán xăng ở ngày thứ $i$ là $p_i$ đồng cho một lít xăng. Mỗi ngày An có thể mua số lượng xăng không hạn chế, nếu không dùng hết có thể để dành cho những ngày hôm sau. 

***Yêu cầu:*** Hãy giúp An quyết định lượng xăng mua mỗi ngày để đáp ứng yêu cầu với tổng số tiền phải chi là ít nhất có thể?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$.
- Dòng thứ ba chứa $n$ số nguyên dương $p_1, p_2, \dots, p_n$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^5; \forall i: 1 \le i \le n$.
- $1 \le p_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10^3$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là tổng số tiền phải chi (tính bằng đồng) để mua xăng theo phương án tìm được.

## Sample Input 1

```
3
1 2 3
3000 1000 3000
```

## Sample Output 1

```
8000
```

### Explanation 1

Ngày $1$ mua $1$ lít ($3000$đ), ngày $2$ mua $5$ lít ($5000$đ), ngày $3$ mua $0$ lít ($0$đ).



