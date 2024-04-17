# Camera - Editorial

Đầu tiên, ta cần sắp xếp dãy $a$ lại. Lưu ý do $a_i$ rất lớn, ta cần lưu lại dưới dạng `string` hoặc `vector < int >`, do đó cần viết lại hàm so sánh để sắp xếp dãy $a$.

Ta có một bài toán con như sau:
- Cho hai số nguyên dương $a,b \ (a < b),$ cần tìm giá trị của $x$ để tổng $|x-a| + |x-b|$ nhỏ nhất.
- Dễ thấy rằng, đặt $x$ vào bất cứ đâu trong đoạn $[a,b]$ cũng sẽ thu được kết quả tối ưu.

Mở rộng bài toán trên vào bài toán này, ta nhận thấy rằng, đặt camera vào giữa dãy (sau khi sắp xếp) sẽ là tối ưu nhất. Ví dụ $n$ lẻ, ta đặt camera vào vị trí $a_{\frac{n+1}{2}}$, ngược lại $n$ chẵn ta có thể đặt camera vào một ví trị bất kì trong đoạn $\left[a_{\frac{n}{2}},a_{\frac{n}{2}+1}\right]$ để thu được kết quả tối ưu.

Để tính toán cần dùng cộng và trừ số lớn.