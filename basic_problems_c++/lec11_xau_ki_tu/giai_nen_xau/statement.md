# Giải Nén Xâu

Xét xâu kí tự $S$ chỉ bao gồm các ký tự chữ cái latin in thường hoặc in hoa. Phép rút gọn xâu được định nghĩa như sau: Nếu như các kí tự $c$ đứng cạnh nhau $n$ lần liên tiếp $(n > 0),$ thì cụm kí tự $c$ đó sẽ được rút gọn thành $nc$. Như vậy, phép giải nén xâu là phép ngược lại của rút gọn xâu.

Lấy ví dụ: Xâu `3A2b1C1D2E` được rút gọn thành xâu `AAAbbCDEE`.

***Yêu cầu:*** Cho trước xâu kí tự $S$ chỉ gồm các kí tự chữ cái latin và các chữ số ở dạng đã rút gọn. Hãy khôi phục xâu $S$ về trạng thái ban đầu?

## Input

- Một dòng duy nhất chứa xâu kí tự $S$.

## Constraints

- $|S| \le 1000;$ với $|S|$ là độ dài xâu $S$.

## Output

- Đưa ra xâu $S$ sau khi đã giải nén. Dữ liệu đảm bảo xâu $S$ sau khi giải nén ra sẽ có độ dài không vượt quá $10000$ kí tự.

## Sample Input 1

```
10A1B2c
```

## Sample Output 1

```
AAAAAAAAAABcc
```

