# Căn phòng hình chữ nhật

Cho một bảng hình chữ nhật gồm $H$ hàng và $W$ cột.

Ta sẽ che phủ tất cả các ô của bảng hình chữ nhật trên bằng $A$ cục gạch $2 \times 1$ và $B$ cục gạch $1\times 1$.

***Yêu cầu***: Hãy đếm số cách để che phủ tất cả các ô của bảng chữ nhật.

## Input

- Dòng đầu tiên chứa $4$ số $H, W,A,B$.

## Constraints

- $1 \le H, W$.
- $H\times W \le 16$.
- $0 \le A,B$.
- $2\times A + B = H \times W$.

## Output

- In ra số cách để che phủ tất cả các ô của bảng chữ nhật.

## Sample input 1

```
2 2 1 2
```

## Sample output 1

```
4
```

## Explanation 1

Có $4$ cách như sau:

<div style='text-align: center'><img src="https://cdn.ucode.vn/uploads/24295/images/tKOdWneT.png" class="content-img" /></div>

## Sample input 2

```
3 3 4 1
```

## Sample output 2

```
18
```

