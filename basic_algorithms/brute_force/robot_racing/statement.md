# Đua Robot

Trong một cuộc thi đua robot có $n$ chú robot tham gia, các chú robot được đánh số từ $1$ tới $n$. Đoạn đường đua có độ dài $d$ (mét), robot thứ $i$ có tốc độ $v_i$ (m/phút). Các robot lần lượt xuất phát từ robot thứ $1$ tới robot thứ $n,$ mỗi robot xuất phát cách nhau $1$ phút. Biết rằng robot thứ $i$ được gọi là vượt robot thứ $j$ nếu như robot $i$ xuất phát sau robot $j$ nhưng lại tới đích trước.	

***Yêu cầu:*** Hãy xác định số lần vượt nhau của tất cả các robot?

## Input

- Dòng đầu chứa hai số nguyên dương $n$ và $d$.
- Dòng tiếp theo chứa $n$ số tự nhiên $v_1, v_2, \dots, v_n$ lần lượt là vận tốc của các robot từ $1$ tới $i$.

## Constraints

- $1 \le n \le 10^3$.
- $1 \le d \le 10^9$.
- $1 \le v_i \le 1000; \forall i: 1 \le i \le n$.

## Output

- In ra tổng số lần vượt nhau của các robot.

## Sample Input 1

```
5 10
1 2 4 3 8
```

## Sample Output 1

```
7
```

## Explanation 1

Robot $2$ vượt robot $1;$ robot $3$ vượt các robot $1$ và $2;$ robot $4$ vượt robot $1;$ robot $5$ vượt các robot $1, 2$ và $4$. Tổng số lần vượt nhau là $7$ lần.
