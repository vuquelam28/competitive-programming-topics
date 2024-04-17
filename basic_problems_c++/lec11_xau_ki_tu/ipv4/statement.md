# Địa Chỉ IPV4

Chắc hẳn ai trong số chúng ta cũng đã quá quen thuộc với các địa chỉ IPV4 - giao thức Internet phiên bản thứ tư. Một địa chỉ IPV4 được biểu diễn bằng $4$ số nguyên $8$ bit, phân tách với nhau bởi dấu `.`, chẳng hạn như: `192.168.1.1` hay `255.255.255.0`. Như vậy, một xâu kí tự $s$ là một địa chỉ IPV4 hợp lệ nếu nó thỏa mãn các điều kiện:
- $s$ gồm bốn số nguyên có giá trị thuộc phạm vi $[0, 255]$.
- Giữa hai số nguyên được phân tách bởi một dấu `.`

***Yêu cầu:*** Nhập vào một chuỗi kí tự $s,$ hãy kiểm tra xem nó có phải là một địa chỉ IPV4 hợp lệ hay không?

## Input

- Một dòng duy nhất chứa xâu kí tự $s$ chỉ bao gồm các số nguyên, giữa các số nguyên phân tách nhau bởi một dấu `.`

## Constraints

- $|s| \le 100,$ với $|s|$ là độ dài xâu $s$.
- Các số nguyên trong xâu $s$ không vượt quá $10^{18}$.

## Output

- Đưa ra thông báo `Valid` nếu $s$ là một xâu kí tự IPV4 hợp lệ, ngược lại đưa ra `Invalid`.

## Sample Input 1

```
192.168.1.1
```

## Sample Output 1

```
YES
```

## Sample Input 2

```
1001.255.255.78
```

## Sample Output 2

```
NO
```