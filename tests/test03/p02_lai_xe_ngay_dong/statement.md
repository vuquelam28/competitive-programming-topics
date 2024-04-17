# Lái Xe Ngày Đông

Mùa đông ở Berland kéo dài $N$ ngày. Mỗi ngày dự báo cho biết nhiệt độ không khí trung bình ngày hôm đó. CP có bộ lốp xe mùa đông mới cho phép anh ta lái xe an toàn không quá $K$ ngày ở bất kì nhiệt độ nào (không nhất thiết phải sử dụng $K$ ngày liên tiếp) Trước ngày mùa đông Before CP đang sử dụng lốp mùa hè. Có thể sử dụng lốp xe mùa hè bất kì ngày nào nếu nhiệt độ trung bình của ngày hôm đó không âm. Tức là nhiệt độ âm thì không thể sử dụng lốp xe mùa hè. CP có thể thay đổi lốp xe mùa hè thành lốp mùa đông hoặc ngược lại vào đầu của một ngày bất kì.

***Yêu cầu:*** Tìm số lần thay lốp là nhỏ nhất để CP có thể lái xe an toàn cả mùa đông. Cuối mùa đông xe có thể đang dùng bất kì bộ lốp nào?

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $K$ – số lượng ngày mùa đông và số ngày tối đa có thể đi bằng lốp xe mùa đông.
- Dòng thứ hai chứa $N$ số nguyên $t_1,t_2,…,t_N$ – lần lượt là nhiệt độ trung bình của $N$ ngày mùa đông.

## Constraints

- $1≤N≤2×10^5$.
- $0≤K≤N$.
- $-20≤t_i≤20;∀i:1≤i≤N$.

## Output

- In ra số lần thay lốp nhỏ nhất để CP có thể lái xe an toàn. Nếu không có cách nào in ra $-1$.

## Sample Input 1

```
4 3
-5 20 -3 0
```

## Sample Output 1

```
2
```

## Sample Input 2

```
4 2
-5 20 -3 0
```

# Sample Output 2

```
4
```

## Explanation

Trong ví dụ đầu tiên: Lần $1$ thay lốp xe mùa hè bằng lốp xe mùa đông và lái trong $3$ ngày liên tiếp. Lần $2$ thay lốp xe mùa đông bằng lốp mùa hè để lái ngày cuối cùng (vì lốp xe mùa đông chỉ sử dụng được $3$ ngày).

Trong ví dụ hai:	
- Lần $1$: Thay lốp xe mùa hè bằng mùa đông: lái $01$ ngày.
- Lần $2$: Thay lốp xe mùa đông bằng mùa hè lái $01$ ngày.
- Lần $3$: Thay lốp xe mùa hè bằng lốp mùa đông để lái $01$ ngày.
- Lần $4$: Thay lốp xe mùa đông bằng mùa hè lái $01$ ngày.

$\Rightarrow$ Tổng $4$ lần thay và đã sử dụng hết $2$ ngày để đi bằng lốp xe mùa đông.

