# Vào Nhà Hàng

John là một đại gia vùng Manchester. Một hôm John muốn dẫn bạn gái vào nhà hàng ăn. Nhà hàng có $N$ bàn ăn, mỗi bàn ăn có hai loại giá $a_i$ và $b_i,$ John phải trả $a_i$ cho bàn $i$ nếu đặt trước và $b_i$ nếu không đặt trước. John chỉ đặt trước một bàn duy nhất, nhưng do sợ bạn gái mình ăn không đủ no nên John quyết định có gì sẽ đến đó sang ăn các bàn khác ăn nếu bạn gái mình vẫn đói. Vì John là một người rất cẩn thận nên anh muốn biết nếu mình và bạn gái nếu ăn $k$ bàn thì sẽ tốn ít nhất bao nhiêu tiền.

***Yêu cầu:*** Tính số tiền ít nhất John phải trả cho $k$ bàn với $k$ từ $1$ đến $N?$

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Trên $N$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $a_i$ và $b_i$.

## Constraints

- $1≤N≤5×10^5$.
- $1≤a_i,b_i≤10^9;1≤i≤N$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1≤N≤1000$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $N$ dòng, dòng thứ $i$ là số tiền ít nhất phải trả nếu John ăn ở $i$ bàn.

## Sample Input 1

```
3
10 5
9 3
10 5 
```

## Sample Output 1

```
9
13
18 
```

## Sample Input 2

```
2
100 1
1 100
```

## Sample Output 2

```
1
2
```