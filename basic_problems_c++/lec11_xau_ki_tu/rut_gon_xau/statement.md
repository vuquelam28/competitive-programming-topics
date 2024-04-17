# Rút Gọn Xâu

Xét xâu $S$ chỉ bao gồm các ký tự chữ cái latin in thường hoặc in hoa. Phép rút gọn xâu được định nghĩa như sau: Nếu như các kí tự $X$ đứng cạnh nhau $N$ lần liên tiếp $(N > 0),$ thì cụm kí tự $X$ đó sẽ được rút gọn thành `NX`. Ví dụ: `AAAbbCDEE` $\rightarrow$ `3A2b1C1D2E`.

***Yêu cầu:*** Cho trước xâu kí tự $S$ chỉ gồm các kí tự chữ cái latin. Hãy rút gọn xâu $S$ và đưa ra màn hình?

## Input

- Một dòng duy nhất chứa xâu kí tự $S$ chỉ gồm toàn các chữ cái latin.

## Constraints

- Độ dài xâu $S$ không vượt quá $10^6$.

## Output

- Đưa ra xâu $S$ sau khi đã rút gọn.

## Sample Input 1

```
AAAbbCDEE
```

## Sample Output 1

```
3A2b1C1D2E
```

