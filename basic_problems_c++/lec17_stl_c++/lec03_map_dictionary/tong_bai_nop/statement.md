# Tổng Bài Nộp

Các cuộc thi Codechef chia làm ba hạng. Trong một cuộc thi, có $N$ bài tập cho mỗi hạng, nhưng một bài có thể được dùng chung trong nhiều hạng của cuộc thi. Mỗi bài tập được xác định bằng một mã duy nhât - là một xâu chỉ chứa các chữ cái tiếng anh viết hoa. Mỗi thí sinh tham gia thì chỉ có thể nộp bài ở một trong các hạng của cuộc thi.

Chef muốn tìm ra số lượng các đáp án chính xác cho mỗi bài toán, trong tổng cả $3$ hạng của cuộc thi. Cho dánh sách $N$ mã bài tập với số lời giải đúng cho mỗi bài tập trong từng hạng, hãy tìm tổng số bài giải đúng cho mỗi bài tập và sắp xếp chúng theo thứ tự không giảm.

## Input

- Dòng đầu tiên của dữ liệu vào chưa một số nguyên $T$ là số test, $T$ test được mô tả như sau:
- Dòng đầu tiên của mỗi test chứa một số nguyên $N$.
- Trên $N$ dòng tiếp theo, với mọi $i$, dòng thứ $i$ chứa một xâu $S_{3, i}$ mà một số nguyên $C_{3, i}$ lần lượt là mã của bài tập và số các lời giải đúng cho bài tập thứ $i$ trong hạng thứ ba của cuộc thi.
- $N$ dòng tiếp theo: với mọi $i$, dòng thứ $i$ chứa một xâu $S_{2, i}$ mà một số nguyên $C_{2, i}$ lần lượt là mã của bài tập và số các lời giải đúng cho bài tập thứ $i$ trong hạng thứ hai của cuộc thi.
- Cuối cùng, $N$ dòng tiếp theo: với mọi $i$, dòng thứ $i$ chứa một xâu $S_{1, j}$ và một số nguyên $C_{1, j}$ lần lượt là mã của bài tập và số các lời giải đúng cho bài tập thứ $i$ trong hạn thứ nhất của cuộc thi.

## Constraints

- $1 \le T \le 10$.
- $1 \le |S_{1, i}|, |S_{2, i}|, |S_{3, i}| \le 8 \; \forall i$.
- $1 \le C_{1, i}, C_{2, i}, C_{3, i} \le 5 \cdot 10^8 \; \forall i$.
- $S_{1, i}, S_{2, i}, S_{3, i}$ chỉ chứa các chữ cái in hoa tiếng Anh với mọi $i$.
- Tổng của $N$ trong tất cả các test không vượt quá $10^6$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le N \le 10$ và $1 \le C_{1, i}, C_{2, i}, C_{3, i} \le 20$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Với mọi test case, gọi $P$ là số các bài tập khác nhau; hãy in ra $P$ số nguyên - số các lời giải cho mỗi bài tập trên theo thứ tự không giảm.

## Sample Input 1

```
3
1
A 1
B 2
C 3
2
AA 1
AB 1
AB 1
AC 1
AC 1
AD 1
1
Z 100
Z 100
Z 100
```

## Sample Output 1

```
1 2 3
1 1 2 2
300
```

## Explaination 1

Test case $1$: chỉ có một bài tập trong mỗi hạng của cuộc thi và không có bài nào chung ở các hạng, do đó tổng số bài tập khác nhau là $3$ và tổng số đáp án là $1, 2, 3$ lần lượt cho các bài A, B, C.

Test case $2$: có bai bài tập trong mỗi hạng và cứ hai hạng lien tiếp chung nhau $1$ bài tập, do đó, tổng số bài tập khác nhau là $4$ và số đáp án là $1$ cho AA, $2$ cho AB, $2$ cho AC và $1$ cho AD. Chúng ta cần sắp xếp chúng theo thứ tự không giảm, do đó đáp án sẽ là $1, 1, 2, 2$.

Test case $3$: chỉ có một bài tập Z trong cả cuộc thi, chung cho tất cả các hạng. Do đó tổng số đáp án là $300$.

## Sample Input 2

```
1
2
A 2
B 3
A 3
C 1
C 3
D 3
```

## Sample Output 2

```
3 3 4 5
```

## Explaination 2

Test case $1$: Có $2$ bài tập cho mỗi hạng, tổng số lời giải cho từng bài tập là: A có $5$ lời giải, B có $3$ lời giải, C có $4$ lời giải, D có $3$ lời giải. Vậy đáp án là $3, 3, 4, 5$.