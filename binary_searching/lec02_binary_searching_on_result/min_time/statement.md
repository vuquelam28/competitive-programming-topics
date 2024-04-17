# Thời Gian Nhỏ Nhất

Một xưởng gói quà công nghiệp có $N$ món quà khác nhau cần gói. Để giảm thiểu thời gian gói quà, công ty này sử dụng một dây chuyền gồm $M$ máy gói quà tự động, máy thứ $i$ có thời gian gói là $a_i (1≤i≤M)$. Do thời gian gấp rút, công ty muốn tính toán xem cần tối thiểu bao lâu để $N$ món quà được gói xong.

***Yêu cầu:*** Hãy tính thời gian tối thiểu để $N$ món quà được gói xong. Coi rằng mỗi máy gói quà đều có thể gói liên tục, bỏ qua thời gian vận chuyển các món quà.

## Input

- Dòng đầu là $2$ số nguyên dương $N,M$ – số món quà cần gói và số lượng máy gói quà.
- Dòng tiếp theo chứa $M$ số nguyên dương $a_1,a_2,…,a_M$ – thời gian gói quà của từng máy.

## Constraints

- $1≤N≤10^9$.
- $1≤M≤10^6$.
- $1≤a_i≤100;∀i:1≤i≤M$.

## Output

- Gồm một số nguyên duy nhất là kết quả bài toán.

## Sample Input

```
5 3
1 2 1
```

## Sample Output

```
2
```