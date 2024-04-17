# Cam Sành Hàm Yên

Nhân dịp Trại hè Hùng Vương năm nay tổ chức tại tỉnh Tuyên Quang, được biết ở huyện Hàm Yên có loại cam sành rất nổi tiếng nên các đoàn cùng nhau tới thăm nông trang trồng cam sành của gia đình ông Nghiệp. Nông trang trồng cam của ông Nghiệp nằm trên núi cao, khí hậu mát mẻ và được tưới bằng nước nguồn từ đỉnh núi nên cam có vị ngọt mát và giá trị dinh dưỡng cao.
Trong các đoàn đến tham quan có $N$ người muốn mua cam. Do mọi người muốn nhường nhau nên mỗi người chỉ mua một quả, người thứ i cho biết sẵn sàng trả giá $p_i$ (nghìn đồng) cho một quả cam. 
Ông Nghiệp quyết định đưa ra một mức giá cố định là $K$ (nghìn đồng) cho mỗi quả cam trong vườn. Vì rất thích tính cách hào phóng của khách nên ông sẽ bán với giá $K$ cho tất cả những người sẵn sàng trả giá lớn hơn $K$. Ngoài ra, nếu có những người khách trả giá đúng bằng $K,$ ông sẽ chỉ bán duy nhất cho người khách đến sớm nhất.

***Yêu cầu:*** Tuy hiếu khách, nhưng vì miếng cơm manh áo nên ông Nghiệp vẫn muốn thu được số tiền nhiều nhất có thể. Hãy giúp ông Nghiệp chọn ra mức giá $K$ phù hợp để có thể thu được nhiều tiền nhất từ việc bán cam cho $N$ vị khách nói trên. Biết rằng số cam trong vườn đảm bảo đủ cho tất cả khách tới thăm.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ – số lượng khách muốn mua cam.
- Dòng thứ hai chứa $N$ số nguyên dương $p_1,p_2,..,p_N$ – giá sẵn sàng trả cho một quả cam của $N$ người theo thứ tự đến thăm vườn của từng người.

## Constraints

- $1≤N≤10^5$.
- $0<p_i≤10^6;1≤i≤N$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $N≤1000;p_i≤1000; p_i≠p_j  (∀i≠j)$.
- Subtask $2$ ($30\%$ số điểm): $N≤1000;p_i≠p_j  (∀i≠j)$.
- Subtask $3$ ($20\%$ số điểm): $N≤10^5;p_i≠p_j  (∀i≠j)$.
- Subtask $4$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số tiền lớn nhất ông Nghiệp có thể thu được.

## Sample Input

```
4
1 2 5 4
```

## Sample Output

```
8
```