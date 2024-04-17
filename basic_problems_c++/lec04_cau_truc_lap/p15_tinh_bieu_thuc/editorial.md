# Tính Biểu Thức - Editorial

Quy luật của các số hạng trong biểu thức $S$ như sau: Với mỗi giá trị $i = 1, 3, 5, 7,..., N$ thì:

- Số hạng hiện tại sẽ có dạng $\pm \frac{x^i}{i!}$.
- Nếu đánh số thứ tự các số hạng từ $1, 2, 3,...$ thì số hạng ở vị trí lẻ sẽ mang dấu `+`, số hạng ở vị trí chẵn sẽ mang dấu `-`.

***Ý tưởng:***

- Duy trì hai biến $nume$ và $deno$ để lưu hai giá trị tử số và mẫu số của mỗi số hạng. Ban đầu ta tính trước số hạng đầu tiên, tức là $nume = x$ và $deno = 1$.
- Gọi $id$ là chỉ số của các phần tử. Biến này ban đầu bằng $1$. 
- Biến $res$ lưu kết quả biểu thức. Ban đầu $res = \frac{num}{deno}$.
- Lặp qua các giá trị $i = 3, 5, 7,..., N,$ với mỗi $i$ ta tính $id = id + 1, nume = nume \times x^2$ và $deno = deno \times i \times (i - 1)$ (thay vì dùng vòng lặp lồng bên trong để tính lại cả tử và mẫu). Sau đó ta cộng hoặc trừ vào $res$ một lượng $\frac{nume}{deno}$ tùy vào việc $id$ là số chẵn hay lẻ.

Lưu ý phải ép kiểu trong quá trình tính toán để thu được kết quả số thực.



