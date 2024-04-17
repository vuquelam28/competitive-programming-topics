# Palin List

Ta đã biết khái niệm xâu đối xứng (xâu palindrome), là xâu mà viết xuôi hay viết ngược đều giống nhau. Trong bài toán này, ta sẽ kiểm tra các danh sách có phải đối xứng hay không. 

***Yêu cầu:*** Bạn cần trả lời $q$ truy vấn có dạng như sau: Cho một danh sách liên kết $S$ có độ dài $n,$ kiểm tra xem nó có phải một palindrome hay không?

## Input

- Dòng đầu tiên chứa một số nguyên dương $q$ miêu tả số truy vấn.
- Trên $2q$ dòng tiếp theo:
    - Dòng $q+i-1$ gồm số nguyên dương $n$ miêu tả độ dài của $S$.
    - Dòng $q+i$ gồm $n$ số nguyên dương miêu tả $S$ theo chiều từ đầu tới cuối.

## Constraints 

- $q \le 50$.
- $1\le |n| \le 500$.
- Các phần tử trong $S$ nằm trong khoảng $[0,9]$.

## Output

- In ra $0$ nếu $S$ không phải một danh sách đối xứng, ngược lại in ra $1$.

## Sample Input 1

```
5
5
1 2 2 2 1
2
1 2
1
1
3
1 2 1
4
1 2 2 2
```

## Sample Output 1

```
1
0
1
1
0
``` 