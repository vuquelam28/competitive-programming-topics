# Chia Nhóm - Editorial

Vector nghiệm của bài toán là một tập $X = (x_1, x_2,\dots, x_n)$ là chỉ số nhóm của các phần tử $a_1, a_2, \dots, a_n$. Nhận xét thấy $1 \le x_i \le k;$ nên thực tế mỗi tập $X$ chính là một chỉnh hợp lặp chập $n$ của $k$. 

Sử dụng quay lui để sinh ra mọi chỉnh hợp lặp chập $n$ của $k$. Ứng với mỗi chỉnh hợp tìm được, ta thử xem đó có phải một cách chia nhóm hợp lệ hay không. Sử dụng các mảng sau:

- $\text{group\_sum}[i]$: Tổng các phần tử thuộc nhóm $i$.
- $\text{group\_elements}[i]$: Lưu danh sách các phần tử của nhóm thứ $i$.

Nếu như một phương án thỏa mãn: $\text{group\_sum}[1] = \text{group\_sum}[2] = \cdots = \text{group\_sum}[k]$ thì ta sẽ in ra danh sách các phần tử của từng nhóm và dừng chương trình luôn.