# Chọn Cuộc Họp

Trung tâm X có một hội trường chuyên cho thuê để tổ chức các cuộc họp. Trung tâm nhận được $N$ yêu cầu đăng ký sử dụng hội trường để tổ chức $N$ cuộc họp khác nhau, cuộc họp thứ $i \ (1 \le i \le N)$ sẽ bắt đầu ở thời điểm $a_i$ và kết thúc tại thời điểm $b_i$. Tất nhiên, Ban lãnh đạo Trung tâm muốn phục vụ được càng nhiều yêu cầu càng tốt, vì thế, họ cần lựa chọn xem sẽ nhận những yêu cầu nào. Biết rằng, hai cuộc họp thứ i và thứ j chỉ có thể được lựa chọn đồng thời nếu như $b_i < a_j$ hoặc $b_j < a_i$.

***Yêu cầu:*** Hãy giúp Trung tâm lựa chọn ra nhiều cuộc họp nhất để cho thuê, đồng thời hãy đếm xem có bao nhiêu phương án lựa chọn như vậy (hai phương án lựa chọn được coi là khác nhau nếu như có ít nhất một cuộc họp khác nhau trong danh sách chọn của hai phương án)? 

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ - số lượng yêu cầu.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $a_i, b_i$ phân tách nhau bởi một dấu cách - là thời điểm bắt đầu và kết thúc của cuộc họp thứ $i$.

## Constraints

- $1 \le N \le 1000$.
- $0 < a_i < b_i \le 10^9$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 < N \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Hai số nguyên dương $H$ và $S$ phân tách nhau bởi một dấu cách, trong đó $H$ là số lượng nhiều nhất các cuộc họp được chọn và $S$ là số phương án lựa chọn như vậy.

## Sample Input

```
5
1 3
3 5
4 5
8 9
4 7
```

## Sample Output

```
3 2
```

## Explanation

Hai phương án chọn $3$ cuộc họp có thể tổ chức được:
- Phương án $1$: Ba cuộc họp có số thứ tự là $1, 3$ và $4$. 
- Phương án $2$: Ba cuộc họp có số thứ tự là $1, 5$ và $4$.



