# Version Control System

Version Control System (VCS) là một kho lưu trữ các tệp, thường là các tệp cho mã nguồn của các chương trình máy tính, với quyền truy cập được giám sát. Mọi thay đổi được thực hiện đối với các tệp nguồn đều được theo dõi, cùng với việc ai đã thực hiện thay đổi, lý do họ thực hiện và tham chiếu đến các vấn đề đã được khắc phục hoặc các cải tiến được giới thiệu bởi thay đổi.

Trong bài tập này, chúng ta sẽ xem xét một mô hình đơn giản hóa của một dự án sử dụng VCS. Giả sử rằng có $n$ tệp nguồn trong dự án. Tất cả các tệp nguồn đều khác biệt và được đánh số từ $1$ đến $n$.

VCS được sử dụng để duy trì dự án, chứa hai dãy tệp nguồn. Dãy đầu tiên chứa các tệp nguồn được VCS bỏ qua. Nếu một tệp nguồn không nằm trong dãy đầu tiên, thì nó được coi là không được bỏ qua. Dãy thứ hai chứa các tệp nguồn được theo dõi bởi VCS. Nếu một tệp nguồn không nằm trong dãy thứ hai thì nó được coi là chưa được theo dõi. Tệp nguồn có thể có hoặc không thuộc bất kỳ dãy nào trong hai dãy này.

***Yêu cầu:*** Tính toán hai giá trị: số lượng tệp nguồn của dự án được theo dõi và bỏ qua và số lượng tệp nguồn của dự án không được theo dõi và không được bỏ qua?

## Input

- Dòng đầu tiên chứa số nguyên $t$ chỉ số lượng truy vấn.
- Các truy vấn có dạng như sau:
    - Dòng đầu tiên của gồm ba số nguyên $n, m$ và $k$ chỉ số lượng tệp nguồn trong dự án, số lượng tệp nguồn bị bỏ qua và số lượng tệp nguồn được theo dõi.
    - Dòng thứ hai gồm $m$ số nguyên phân biệt tăng dần thuộc dãy $A$ chỉ các tệp nguồn bị bỏ qua.  
    - Dòng thứ hai gồm $k$ số nguyên phân biệt tăng dần thuộc dãy $B$ chỉ các tệp nguồn được theo dõi.

## Constraints

- $1 \le t \le 100$.
- $1 \le m, k \le n \le 100$.
- $1 \le a_1 < a_2 < ... < a_m \le n$.
- $1 \le b_1 < b_2 < ... < b_k \le n$.

## Output

- Với mỗi truy vấn in ra trên một dòng hai số nguyên: số lượng tệp nguồn của dự án được theo dõi và bỏ qua và số lượng tệp nguồn của dự án không được theo dõi và không được bỏ qua.

## Sample Input

```
2
7 4 6
1 4 6 7
1 2 3 4 6 7
4 2 2
1 4
3 4
```

## Sample Output

```
4 1
1 1
```

## Explanation

Trong truy vấn đầu tiên, các tệp nguồn $1, 4, 6, 7$ đều được theo dõi và bỏ qua, tệp nguồn $5$ không được theo dõi và bỏ qua.

Trong truy vấn thứ hai, tệp nguồn $4$ đều được theo dõi và bỏ qua, tệp nguồn $2$ không được theo dõi không được bỏ qua.



