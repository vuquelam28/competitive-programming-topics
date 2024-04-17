# Số Hoàn Hảo - Editorial

Bài toán có thể tách làm hai công đoạn riêng biệt:
- Công đoạn $1$: Thực hiện $m$ thao tác tăng dãy để tìm ra dãy $a$ cuối cùng.
- Công đoạn $2$: Đếm số lượng số hoàn hảo trong dãy $a$.

Công đoạn $1$ ta sẽ làm như sau: Dễ thấy, nếu với mỗi truy vấn tăng đoạn $[u,v]$ lên $k$ đơn vị, ta duyệt qua toàn bộ các vị trí $i \in [u,v]$ để tăng sẽ rất chậm và chỉ qua được subtask $2$. Ở đây, ta sẽ sử dụng một cách tăng gián tiếp, đó là Truy vấn cập nhật đoạn:
- Ban đầu, khởi tạo mảng $a$ tất cả $ = 0$.
- Với mỗi truy vấn tăng $(u,v,k)$ ta xử lý như sau:
    - `a[u] += k;`.
    - `a[v+1] -= k;`.
- Sau tất cả $m$ truy vấn, ta sẽ thực hiện thao tác: `for (int i=1; i<=n; i++) a[i] += a[i-1];`. Ta sẽ ***cộng dồn*** lại các $a_i,$ vậy nên lúc này, giá trị $a_i$ chính là giá trị cuối cùng sau $m$ thao tác tăng. Đây là một bài toán con khá cổ điển và hay được sử dụng trong các kì thi.

Sau khi xây dựng xong dãy $a$, ta sẽ tiến tới công đoạn $2$:
- Để kiểm tra xem số $a_i$ có phải số hoàn hảo hay không, ta cần tính tổng ước không bao gồm chính nó của số $a_i$. Nếu ta làm điều này trong độ phức tạp $O(\sqrt n)$, sẽ khá khó qua bởi $a_i$ có thể lên tới $10^6$ và $n$ lên tới $10^5$.
- Vậy ta cần tính tổng ước như thế nào cho nhanh gọn? Đến đây ta có một thuật toán dựa trên ý tưởng quy hoạch động, khá giống với sàng nguyên tố như sau:
    - Gọi $p_i$ là tổng ước không bao gồm chính nó của số $i$.
    - Ta thực hiện thao tác sau:
        ```cpp
        void cal() 
        {
            int n = 1e6;
            for (int i=1; i<=n; i++)
                for (int j=2*i; j<=n; j+=i) 
                    p[j] += i;
        }
        ```
    - Với mỗi số $i$, ta sẽ duyệt từng bội của nó và lớn hơn chính nó để tăng tổng ước của bội đó lên $i$ đơn vị.
    - Độ phức tạp của thao tác này là $O(n+\frac{n}{2}+\frac{n}{3}+ \cdots + \frac{n}{n}) \rightarrow$ đây là tổng của dãy số Harmonic và nó sẽ tiến tới $O(n \times \log n)$.

- Như vậy, ta sẽ chuẩn bị trước dãy $p$ và với mỗi số $a_i,$ ta kiểm tra xem $p_{a_i} = a_i$ hay không, nếu có thì in ra $i$.

***Độ phức tạp chung:*** $O(n \times \log)$.