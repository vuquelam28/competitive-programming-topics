# Bảo tàng cổ vật

Gilgamesh là bảo vệ tại một viện bảo tàng nọ. Hôm nay một lượng cổ vật cụ thể đã được chuyển đến bảo tàng, tuy nhiên bảo tàng chỉ có một số khu vực nhất định để có thể trưng bày những cổ vật đó. Điều ấy làm cho mọi người cảm thấy nhàm chán khi nhìn thấy sự lặp lại của cùng một cổ vật. Gilgamesh đã tìm cách để trưng bày những cổ vật một cách hợp lí để khách tham quan ít cảm thấy nhàm chán nhất.

Mỗi cổ vật được đại diện bởi một kí tự in thường trong bảng chữ cái tiếng Anh. Người đứng đầu bảo tàng muốn tất cả khu vực có thể dùng phải được sử dụng để trưng bày các cổ vật. Như ta đã biết, nếu một người bước vào bảo tàng và nhìn thấy một cổ vật mà anh ta đã thấy trước đó, mức độ nhàm chán của anh ta sẽ tăng lên $1$. 

***Yêu cầu:*** Hãy lắp đầy các khu vực trưng bày của bảo tàng bằng các cổ vật sao cho mức độ nhàm chán của khách tham quan là ít nhất.

## Input

- Dòng đầu tiên gồm hai số nguyên $n$ (số lượng cổ vật mà bảo tàng nhận được) và $c$ (số khu vực có thể dùng để trưng bày cổ vật).
- Dòng tiếp theo gồm $n$ kí tự $a_1, a_2, ..., a_n$ trong bảng chữ cái tiếng Anh với mỗi kí tự đại diện cho một loại cổ vật được chuyển đến bảo tàng.

## Constraints

- $2 \le c \le n \le 10^7$.
- Các $a_i$ chỉ là một trong $26$ kí tự chữ cái latin in thường.

## Output

- Một số nguyên duy nhất chỉ mức độ nhàm chán ít nhất có thể của khách tham quan.

## Sample Input

```
8 5
cbacbbac
```

## Sample Output

```
2
```

## Explanation

Ta có thể sắp xếp các cổ vật vào vị trí trưng bày theo các cách là $(a,a,b,b,c)$, $(b,b,c,c,a)$ hoặc $(c,c,a,a,b)$ để có được mức độ nhàm chán thấp nhất là $2$. 