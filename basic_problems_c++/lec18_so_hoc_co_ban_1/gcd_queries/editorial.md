# Ước Chung Lớn Nhất Trên Đoạn - Editorial

### Subtask 1

Sử dụng giải thuật Euclid với phép trừ, tìm ước chung lớn nhất của các số không thuộc đoạn $[l, r]$.

Độ phức tạp: $O(n \times a_i)$.

### Subtask 2

Sử dụng giải thuật Euclid cải tiến với phép chia dư.

Độ phức tạp: $O\big(t \times n \times \log(a_i)\big)$.

### Subtask 3

Ước chung lớn nhất của các số khi bỏ đi đoạn $[l, r]$ sẽ là 

$$\text{GCD}\big(\text{GCD}(a_1, a_2, \dots, a_{l - 1}), \text{GCD}(a_{r + 1}, a_{r + 2}, \dots, a_n)\big)$$

Ta khởi tạo trước hai mảng là ước chung lớn nhất của tiền tố độ dài $i$ và hậu tố độ dài $(n - i + 1)$ của mảng:

- $\text{prefix\_gcd}[i]$: Ước chung lớn nhất từ $a_1$ tới $a_i$.
- $\text{postfix\_gcd}[i]$: Ước chung lớn nhất từ $a_i$ tới $a_n$.

Với một query $(l, r),$ đáp án sẽ là: 

$$\text{GCD}\big(\text{prefix\_gcd}[l - 1], \text{postfix\_gcd}[r + 1]\big)$$

***Độ phức tạp:*** $O\big(t \times \log(a_i)\big)$.
