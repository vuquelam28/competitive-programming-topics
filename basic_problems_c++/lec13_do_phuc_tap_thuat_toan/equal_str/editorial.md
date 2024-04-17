# Xâu Con Bằng Nhau - Editorial

### Subtask 1

Ta sẽ for qua tất cả các xâu con có cùng độ dài của $s$ và kiểm tra chúng có bằng nhau hay không. Để lấy được xâu con của $s$ ta sử dụng hàm `substr`, hàm này tương đương một vòng lặp và có độ phức tạp lên tới $O(n)$.

***Độ phức tạp:*** $O(n^4)$.

**Code minh họa:**

```cpp
    int res = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            for (int len = 1; j + len - 1 <= n; len++){
                if (s.substr(i, len) == s.substr(j, len)) res++;
            }
        }
    }
    cout << res << endl;
```

### Subtask 2

Ta có thể không cần sử dụng hàm `substr`. Để ý rằng, nếu xâu $s[i...i+len-1]$ bằng xâu $s[j..j+len-1]$ thì xâu $s[i...i+len-2]$ bằng xâu $s[j...j+len-2]$. Từ đó ta chỉ cần kiểm tra xem $s[i+len-1]$ có bằng $s[j+len-1]$ không, nếu có thì cộng vào đáp án, nếu không ta sẽ $break$ vì các xâu có độ dài lớn hơn bắt đầu tại $i$ và $j$ chắc chắn không bằng nhau.

***Độ phức tạp:*** $O(n^3)$.