# Sơn Hàng Rào

Tuấn được bố mẹ giao nhiệm vụ sơn lại hàng rào để đón năm mới.

Hàng rào gồm $n$ tấm ván được đặt cạnh nhau thẳng hàng, đánh số từ $1$ đến $n$ từ trái sang phải. Tuấn định nghĩa hàng rào đẹp sẽ có đúng $k$ tấm ván khác màu với tấm ván nằm ngay cạnh bên trái nó (tất nhiên tấm ván đầu tiên sẽ không được đếm). Hiện tại Tuấn có $m$ thùng sơn khác màu, cậu ấy sơn một tấm ván bằng một trong $m$ màu. Tuấn muốn liệt kê tất cả trường hợp có thể sơn để chọn ra một trường hợp đẹp nhất.

***Yêu cầu:*** Bạn hãy viết chương trình giúp Tuấn đếm số cách sơn hàng rào đẹp khác nhau? Vì kết quả thể rất lớn nên chỉ cần tính phần modulo cho $998244353$. Hai cách sơn được xem là khác nhau nếu tồn tại hai tấm ván cùng vị trí được sơn màu khác nhau.

## Input

- Dòng duy nhất chứa ba số nguyên $n, m, k$ — số lượng tấm ván của hàng rào, số lượng màu sơn, số lượng tấm ván khác màu với tấm ván bên trái cạnh nó.

## Constraints

- $1 \le n, m \le 2000$.
- $0 \le k \le n - 1$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n, m \le 500$.
- Subtask $2$ ($70\%$ số điểm): $500 < n, m \le 2000$.

## Output

- In ra số nguyên — số cách sơn hàng rào khác nhau modulo $998244353$.

## Sample input 1

```
3 3 0
```

## Sample output 1

```
3
```

## Explanation 1

Với $k$ bằng $0$ thì các tấm ván phải cùng màu, vậy có $3$ cách tô khác nhau với $3$ màu.

## Sample input 2

```
3 2 1
```

## Sample output 2

```
4
```

## Explanation 2

Ảnh minh họa cho $4$ cách sơn khác nhau:

<div style='text-align: center'><img src="https://cdn.ucode.vn/uploads/24444/images/QjkWQMmw.png" class="content-img width-100 tablet-width-100 mobile-width-100" /></div>