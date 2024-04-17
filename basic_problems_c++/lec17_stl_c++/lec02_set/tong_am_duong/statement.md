# Tổng âm dương

Hôm nay Đô vừa học về mảng và cậu muốn giải bài tập về chủ đề này. Đô đã nói việc này với bạn của cậu ấy là Hiếu. Hiếu muốn xem thử Đô đã thành thạo về mảng hay chưa, vì vậy Hiếu đã cho Đô một mảng số nguyên gồm $n$ chữ số. Nhiệm vụ của Đô là tìm tổng của tất cả các số nguyên dương phân biệt và các số nguyên âm phân biệt trong mảng đã cho. Vì Đô chỉ mới bắt đầu học lập trình nên cậu ấy chưa thể giải được bài tập này nên cậu ấy đang cần sự trợ giúp từ bạn.

***Yêu cầu:*** Tìm tổng của tất cả các số nguyên dương phân biệt và các số nguyên âm phân biệt trong mảng đã cho?

## Input

- Dòng đầu tiên chứa số nguyên $t$ chỉ số lượng truy vấn.
- Các truy vấn có dạng như sau:
    - Dòng đầu tiên chứa số nguyên $n$ chỉ số lượng phần tử của mảng.
    - Dòng thứ hai gồm $n$ số nguyên $a_1, a_2, ..., a_n$ phân tách bằng dấu cách.

## Constraints

- $1 \le t \le 100$.
- $2 \le n \le 10^4$.
- $-100 \le a_i \le 100$.

## Output

- Với mỗi truy vấn xuất ra màn hình hai số nguyên trên một dòng cho biết tổng của tất cả các số nguyên dương phân biệt và các số nguyên âm phân biệt trong mảng đã cho.

## Sample Input 1

```
2
5
-1 1 -1 0 -2
6
4 5 3 3 -1 -2
```

## Sample Output 1

```
1 -3
12 -3
```

## Explanation 1

Với truy vấn đầu tiên, các số nguyên dương phân biệt là $1, 0$ và các số nguyên âm phân biệt là $-1,-2$. Tổng các số nguyên dương phân biệt là $1$ và tổng các số nguyên âm phân biệt là $-3$.

Với truy vấn thứ hai, các số nguyên dương phân biệt là $4, 5, 3$ và các số nguyên âm phân biệt là $-1,-2$. Tổng các số nguyên dương phân biệt là $12$ và tổng các số nguyên âm phân biệt là $-3$.



