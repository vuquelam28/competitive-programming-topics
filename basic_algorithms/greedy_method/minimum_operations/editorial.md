# Biến Đổi Dãy - Editorial

Mục tiêu của chúng ta là biến đổi các phần tử trong dãy về bằng $k$ hoặc là bội của $k$.

Với mỗi $a_i,$ chia nó làm hai trường hợp:

- Nếu $a_i < k,$ cần tăng phần tử này lên bằng $k,$ số thao tác là $k - a_i$.
- Nếu $a_i > k,$ có hai cách biến đổi:
    - Giảm $a_i$ về bội của $k$ gần nó nhất, mất $a_i \text{ mod } k$ thao tác.
    - Tăng $a_i$ lên bội nhỏ nhất của $k$ lớn hơn hoặc bằng $a_i$. Trường hợp này mất $k - a_i \text{ mod } k$ thao tác.

    Ta lấy giá trị nhỏ hơn trong hai cách làm này.

Cộng tất cả các thao tác biến đổi lại, ta có kết quả cuối cùng. 

***Độ phức tạp:*** $O(n)$.
