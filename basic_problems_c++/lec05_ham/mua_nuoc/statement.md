# Mua Nước

Tuấn muốn nấu súp để đãi bạn bè trong buổi tiệc tối nay, vì vậy cậu ấy cần mua đúng $n$ lít nước. Nước ở cửa hàng Tuấn mua có hai loại thể tích là $1$ lít và $2$ lít.

***Yêu cầu:*** Biết rằng chai nước thẻ tích $1$ lít có giá $a$ đồng, chai nước thể tích $2$ lít có giá $b$ đồng. Hỏi Tuấn cần chuẩn bị ít nhất bao nhiêu tiền để có thể mua đúng $n$ lít nước, biết rằng số lượng chai nước của mỗi loại trong cửa hàng là vô hạn?

## Input

- Dòng đầu tiên chứa số nguyên $t$ — số lượng test cases.
- Trong mỗi test case bao gồm:
    - Dòng thứ nhất chứa số nguyên $n$ — số lít nước cần mua.
    - Dòng thứ hai chứa số nguyên $a$ — giá tiền của chai nước loại $1$ lít.
    - Dòng thứ hai chứa số nguyên $b$ — giá tiền của chai nước loại $2$ lít.

## Constraints

- $1 \le t \le 500$.
- $1 \le n \le 10^{12}$.
- $1 \le a, b \le 1000$.

## Output

- In ra $t$ dòng tương ứng là kết quả của $t$ test case — số tiền ít nhất Tuấn cần chuẩn bị để mua đúng $n$ lít nước. 

## Sample Input 1

```
4
10
1
3
7
3
2
1
1000
1
1000000000000
42
88
```

## Sample Output 1

```
10
9
1000
42000000000000
```

