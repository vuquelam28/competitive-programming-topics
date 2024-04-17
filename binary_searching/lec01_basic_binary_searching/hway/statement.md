# Đường Cao Tốc

Sau khi đạt được nhiều thành công ở lĩnh vực công nghệ, tập đoàn Cherry quyết định lấn sân sang đầu tư về giao thông vận tải. Họ đã trúng thầu dự án làm đường cao tốc xuyên quốc gia của đất nước FruitLand, giờ công việc tiếp theo là khảo sát địa hình. Thông tin nhận về từ các kĩ sư cho biết, tuyến đường mà tập đoàn cần làm lại được chia thành $N$ vùng địa hình liên tiếp nhau, các vùng được đánh số từ $1$ tới $N$ và có độ cao lần lượt là $h_1, h_2,..., h_N$. Tuy nhiên, đã làm đường cao tốc thì đoạn đường phải có độ cao bằng nhau ở mọi vị trí, vì vậy, nếu vùng địa hình nào quá cao thì sẽ cần san bớt đất đi, còn vùng địa hình nào quá thấp thì sẽ phải đắp thêm đất lên. Mục tiêu là mọi vùng địa hình đều phải có chiều cao bằng nhau trước khi xây dựng.

***Yêu cầu:*** Hiện tại, đội ngũ kĩ sư đề xuất lên $M$ phương án xây dựng đường cao tốc với các độ cao lần lượt là $c_1, c_2,..., c_M$. Với mỗi phương án, hãy tính tổng lượng đất phải san bớt đi và tổng lượng đất phải đắp thêm để mọi vùng địa hình đều đạt được độ cao ở phương án đó?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ - số lượng vùng địa hình của con đường.
- Dòng thứ hai chứa $N$ số nguyên dương $h_1, h_2,..., h_N$ phân tách nhau bởi dấu cách - độ cao ban đầu của các vùng địa hình.
- Dòng thứ ba ghi số nguyên dương $M$ - số lượng phương án xây dựng đề xuất.
- Dòng thứ tư ghi $M$ số nguyên dương $c_1, c_2,..., c_M$ phân tách nhau bởi dấu cách - độ cao đề xuất của các phương án xây dựng.

## Constraints

- $1 \le N \le 2 \times 10^5$.
- $1 \le h_i \le 10^9; \forall i: 1 \le i \le N$.
- $1 \le M \le 2 \times 10^5$.
- $1 \le c_i \le 10^9; \forall i: 1 \le i \le M$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le N, M \le 2000$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ứng với mỗi đề xuất, đưa ra trên một dòng hai số nguyên (cách nhau bởi dấu cách) lần lượt là tổng lượng đất phải đắp thêm và tổng lượng đất phải san bớt đi ở đề xuất đó.

## Sample Input

```
5
4 2 3 1 5
3
1 3 4
```

## Sample Output

```
0 10
3 3
6 1
```

