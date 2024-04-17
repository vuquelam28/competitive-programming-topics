# Hồi Ký

Để chuẩn bị cho ngày kỷ niệm $20$ năm thành lập trường, Đoàn trường THPT XYZ phát động một phong trào viết hồi ký về những năm tháng tuổi học trò. Phong trào nhận được sự hưởng ứng nhiệt liệt của các bạn học sinh cũng như cựu học sinh, của các thầy cô đã và đang giảng dạy trong trường. Các bài viết gửi đến đều được đầu tư chọn lọc rất kỹ, sau đó các bài viết được chọn sẽ được tập hợp và biên tập lại thành một cuốn kỷ yếu.

Cuốn kỷ yếu sau khi biên tập gồm $N$ chương, chương thứ $i$ có $a_i$ trang ($1≤i≤N$). Nếu in thành cả một cuốn thì quá dày và khó cầm, do đó Nhà trường quyết định in tách thành không quá $K$ tập, mỗi chương phải nằm gọn trong một tập: Tập $1$ bao gồm một số chương đầu tiên, mỗi tập tiếp theo bao gồm một số chương tiếp đó,…theo đúng trình tự in các chương ban đầu.

***Yêu cầu:*** Hãy tìm cách phân chia các tập sao cho số trang của tập dày nhất là nhỏ nhất?

## Input

- Dòng đầu chứa hai số nguyên $N$ và $K$.
- Dòng thứ hai chứa $N$ số nguyên dương $a_i$ – số trang của chương thứ $i$.

## Constraints

- $1≤K≤N≤10^5$.
- $1≤a_i≤10^9;∀i:1≤i≤N$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $a_i \le 100; N \le 20$.
- Subtask $2$ ($30\%$ số điểm): $N \le 100$.
- Subtask $3$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Đưa ra một số nguyên duy nhất là số trang của tập dày nhất sau khi phân chia.

## Sample Input 1

```
5 3
3 7 12 8 5
```

## Sample Output 1

```
13
```

## Explanation 1

Tập $1$ chứa hai chương $1$ và $2$; tập $2$ chứa chương $3$ và tập $3$ chứa hai chương $4, 5$.

