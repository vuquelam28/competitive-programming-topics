# Số Lớn Nhất - Editorial

Đối với các $subtask$ có độ dài các số bằng nhau, dễ thấy ta chỉ cần sắp xếp tất cả các số lại rồi in ra theo chiều từ lớn tới bé thì sẽ ra kết quả tối ưu.

Nhưng, nếu độ dài các kí tự là khác nhau, sử dụng thuật toán trên sẽ sai. Ví dụ:
- Có hai số $91$ và $9$. Nếu in ra $919$ sẽ không thể nào tối ưu được bằng in ra $991$. Tức đưa số bé hơn lên trước.
- Tuy nhiên, nếu hai số là $46$ và $4$, dễ thấy số $464$ mới là kết quả tối ưu.

Để xử lí trường hợp trên, ta sẽ định nghĩa phép **lớn hơn** theo một cách khác. Ta định nghĩa : 
- Với hai xâu $a$ và $b$, xâu $a$ **lớn hơn** số $b$ khi và chỉ xếp xâu $a$ trước xâu $b$ ta được một xâu lớn hơn khi xếp xâu $b$ trước xâu $a$.
- Phép so sánh này khi đưa vào code sẽ như sau:
    ```cpp
    bool cmp (string &a, string &b) {
        if (a + b > b + a) return 1;
        else return 0;
    }
    ```

Như vậy, đầu tiên, ta sẽ nhập dữ liệu vào với kiểu $string$ cho các giá trị $a_i$. Sau đó, chỉ cần thực hiện lệnh `sort` theo định nghĩa **lớn hơn** mới của ta như sau: `sort (a+1,a+n+1,cmp);`. Tiếp đó in ra xâu từ lớn tới bé sẽ ra kết quả tối ưu.

***Độ phức tạp:*** $O(n \times \log n)$.