# Số Hoàn Hảo

Bé Huy rất thích tìm hiểu về các số đặc biệt, hôm trước trong giờ học lập trình thầy giáo dạy cho bé về số hoàn hảo. Số hoàn hảo là số có tổng các ước (không kể nó) bằng chính nó, ví dụ số $6$ là số hoàn hảo vì $6=1+2+3$. Bé cảm thấy hứng thú với con số này. Về nhà bé nghĩ ra khá nhiều bài toán xử lí số hoàn hảo. Nhưng hôm nay, thầy cho bé một bài tập rất hóc búa, nghĩ mãi không ra cách làm tốt nhất để được tối đa điểm của bài, nên bé nhờ các bạn học sinh giỏi làm giúp. Bài toán như sau: 

Cho dãy $a_1,a_2, \dots,a_n;$ ban đầu tất cả các phần tử có giá trị bằng $0$. Có $m$ phép biến đổi dạng $(u,v,k)$: *Tăng giá trị các phần tử từ vị trí $u$ đến vị trí $v$ lên $k$ đơn vị.* Dữ liệu đảm bảo sau $m$ phép biến đổi thì $0<a_i \le 10^6 \ (\forall i: 1 \le i \le n)$ và có ít nhất một số hoàn hảo trong dãy. 

***Yêu cầu:*** Với dãy $a_1,a_2,…,a_n$ sau $m$ phép biến đổi, thầy giáo yêu cầu đưa ra vị trí các số hoàn hảo theo thứ tự tăng dần?

## Input

- Dòng đầu là hai số nguyên dương $n,m$ tương ứng là số phần tử của dãy và số lượng phép biến đổi;
- Trên $m$ dòng sau mỗi dòng là ba số nguyên dương $u,v,k$.

## Constraints

- $1 \le n, m \le 10^5$.
- $0 < u \le v \le n$.

## Subtasks

- Subtask $1$ ($35\%$ số điểm): $ 1 \le n,m \le 10^2$.
- Subtask $2$ ($35\%$ số điểm): $n \le 10^5, m \le 10^3$.
- Subtask $3$ ($30\%$ số điểm): $n \le 10^5, m \le 10^5$.

## Output
-	In ra các dòng, mỗi dòng chứa một số nguyên dương là vị trí của số hoàn hảo tìm được trong dãy theo thứ tự tăng dần.

## Sample Input 1

```
6 3
1 6 6
2 3 4
3 5 22
```

## Sample Output 1

```
1
4
5
6
```
## Explanation 1

Dãy thu được sau $3$ phép biến đổi là: $6 \ 10 \ 32 \ 28 \ 28 \ 6$. Các số hoàn hảo sẽ nằm ở các vị trí: $1, 4, 5$ và $6$.