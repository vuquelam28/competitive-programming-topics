# Khôi Phục Dãy Số

Sau một đêm cày game, Thắng vô cùng mệt mỏi và không thể tập trung nghe giảng trên lớp. Hôm nay, thầy Hòa đã viết một dãy số nguyên dương tăng dần và cùng các bạn cố gắng tìm ra những tính chất đặc biệt của dãy số. Chuẩn bị sang bài mới, nhìn thấy Thắng gật gù, thầy Hòa xóa hết bảng và xuống kiểm tra. Thắng rất tự tin là mình đã chép bài đầy đủ. Tuy nhiên, thầy Hòa đã phát hiện ra, khi chép dãy số, Thắng láu cá không ghi thêm các dấu **“,”** phân tách giữa các số. Không thể nhớ nổi việc điền dấu **“,”** vào những vị trí nào, thầy Hòa yêu cầu Thắng đếm số lượng cách thêm dấu **“,”** vào giữa các chữ số để được một dãy tăng.

***Yêu cầu:*** Biết rằng, trong dãy số ban đầu không thể chứa các số có chữ số $0$ vô nghĩa ở đầu, ngoại trừ chính số $0$. Hãy giúp Thắng trả lời câu hỏi mà thầy giáo đưa ra?

## Input

- Một dòng duy nhất chứa xâu kí tự $S$ độ dài $N$ – gồm các chữ số Thắng đã chép vào vở.

## Constraints

- Một số nguyên là số lượng cách thêm dấu **“,”** vào giữa các chữ số để thu được một dãy tăng theo yêu cầu của thầy giáo. Do số lượng cách có thể rất lớn, thầy chỉ yêu cầu Thắng đưa ra số dư trong phép chia của kết quả cho $2017$.

## Subtasks:
	
- Subtask $1$ ($30\%$ số điểm): $N≤20$.
- Subtask $2$ ($20\%$ số điểm): $20<N≤100$.
- Subtask $3$ ($20\%$ số điểm): $100<N≤400$.
- Subtask $4$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên là số lượng cách thêm dấu **“,”** vào giữa các chữ số để thu được một dãy tăng theo yêu cầu của thầy giáo. Do số lượng cách có thể rất lớn, thầy chỉ yêu cầu Thắng đưa ra số dư trong phép chia của kết quả cho $2017$.

## Sample Input 1

```
111
```

## Sample Output 1

```
2
```

## Explanation 1

Các cách chia là: $\{1,11\}; \{111\}$.

## Sample Input 2

```
21023
```

## Sample Output 2

```
3
```

## Explanation 2

Các cách chia là: $\{2,10,23\}; \{2,1023\}; \{21023\}$. Cách chia $\{21,023\}$ là không hợp lệ do số $023$ có chứa chữ số $0$ vô nghĩa ở đầu.