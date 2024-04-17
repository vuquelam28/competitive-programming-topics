# Sinh Hoạt Hè

Một câu lạc bộ thanh thiếu nhi tổ chức sinh hoạt hè tập trung cho học sinh trong thành phố. Có $n$ học sinh tham gia, mỗi học sinh khi đăng ký tham gia phải được kiểm tra trình độ chung về môn khoa học tự nhiên, trình độ môn khoa học xã hội và ghi vào tờ khai ba mục: số diểm về môn khoa học tự nhiên, số điểm về môn khoa học xã hội và giới tính. Câu lạc bộ muốn phân hai em ở một phòng trong thời gian sinh hoạt. Để các em có thể bổ sung kiến thức cho nhau ban tổ chức dự định sắp xếp hai em ở cùng phòng, trước hết phải cùng giới tính, trong hai môn khoa học chỉ có duy nhất một môn trùng điểm (hoặc trùng điểm khoa học tự nhiên, hoặc trùng điểm khoa học xã hội). Vì vậy CLB muốn biết xem có bao nhiêu phương án xếp các em học sinh thoả mãn tiêu chuẩn này.

***Yêu cầu:*** Cho trước danh sách học sinh cùng với giới tính và điểm các môn khoa học xã hội – khoa học tự nhiên của các bạn, hãy đếm số lượng cặp học sinh có thể xếp chung phòng (các cặp học sinh là hoán vị của nhau chỉ tính là một cặp)?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng học sinh.
- Trên $n$ dòng tiếp theo, dòng thứ $i$ chứa ba số nguyên dương $a_i, b_i, c_i;$ trong đó $a_i, b_i$ lần lượt là điểm hai môn khoa học tự nhiên và khoa học xã hội của học sinh thứ $i,$ còn $c_i = 1$ hoặc $c_i = 2$ tương ứng với giới tính của học sinh là nam hay nữ. 

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i, b_i \le 100; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số lượng cặp học sinh tìm được.

## Sample Input 1

```
6
3 5 1
3 1 2
5 3 2
3 2 2
4 5 1
3 2 2
```

## Sample Output 1

```
3
```

## Explanation 1

Các cặp thỏa mãn là: $(1, 5); (2, 4); (2, 6)$

