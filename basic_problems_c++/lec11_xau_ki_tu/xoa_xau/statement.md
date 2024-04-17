# Xóa Xâu

Tuấn có xâu $s$ chỉ chứa các kí tự `A`, `B` hoặc `C`. Ở mỗi lượt, anh ấy có thể thực hiện một trong hai thao tác sau:

- Chọn một kí tự `A` và một kí tự `B` ở hai vị trí bất kì trong xâu, sau đó xóa hai kí tự đó. 
- Chọn một kí tự `B` và một kí tự `C` ở hai vị trí bất kì trong xâu, sau đó xóa hai kí tự đó. 

Lấy ví dụ với xâu  $s =$ `ABCABC`, ở thao tác đầu tiên Tuấn có thể xóa kí tự `A` đầu tiên và kí tự `B` cuối cùng, khi ấy xâu sẽ trở thành $s =$ `BCAC`. Tuấn cũng có thể thực hiện nhiều thao tác hơn để biến đổi xâu $s$.

***Yêu cầu:*** Cho xâu $s$, hỏi Tuấn có thể biến xâu $s$ thành xâu rỗng sau khi thực hiện một chuỗi các thao tác được nêu ở trên hay không?

## Input

- Dữ liệu vào gồm nhiều test case. Dòng đầu tiên chứa số nguyên $t$ — số lượng test case.
- Mỗi test case gồm một dòng chứa xâu $s$ chỉ gồm các kí tự `A`, `B`, `C`.

## Constraints

- $1 \le t \le 100$.
- $1 \le |s| \le 5000$.

## Output

- Gồm $t$ dòng là kết quả của $t$ test case, in ra `YES` nếu có thể biến xâu $s$ thành xâu rỗng, ngược lại in ra `NO`.

## Sample input 1

```
6
ABACAB
ABBA
AC
ABC
CABCBB
BCBCBCBCBCBCBCBC
```

## Sample output 1

```
NO
YES
NO
NO
YES
YES
```

