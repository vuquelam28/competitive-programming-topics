# Hồ Sơ Xét Nghiệm - Editorial

Ý tưởng bài toán rất đơn giản, ta lần lượt tìm ra các virus thuộc các nhóm, chỉ cần xử lý khéo léo là được. Dưới đây trình bày một cách giải của người viết editorial:
- Đầu tiên tìm những virus thuộc nhóm $1$: Là những virus xuất hiện trong hồ sơ của những người không có bệnh. Ta sẽ đánh dấu lại những virus này 
bằng mảng $mark[j]$ với ý nghĩa: $mark[j] = \text{true}$ là virus $j$ không mang bệnh, ngược lại virus $j$ có thể mang bệnh hoặc chưa xác định được.
- Tiếp theo ta xét tới những hồ sơ $i$ mang bệnh: Gọi $patient[i]$ là danh sách các virus thuộc hồ sơ này và không thuộc nhóm $1$ (ta có thể xây dựng một mảng với mỗi phần tử là một vector). Khi đó ta nhận thấy nếu $patient[i]$ chỉ gồm $1$ loại virus thì chắc chắn virus đó là virus gây bệnh, nhưng nếu $patient[i]$ gồm $2$ loại virus trở lên thì ta chưa thể chắc chắn là virus nào trong số đó mới thực sự gây bệnh. Như vậy, có thể kết luận nếu kích thước của vector $patient[i]$ bằng $1$ thì chắc chắn virus này thuộc nhóm $2$. Ta sẽ đánh dấu luôn virus này lại để hiểu rằng nó đã được phân loại xong.
- Những virus còn lại chưa được phân loại sẽ thuộc nhóm 3.

***Độ phức tạp:*** $O(n \times m)$.