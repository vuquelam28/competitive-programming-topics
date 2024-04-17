# Tìm Đường

Trung tâm khảo sát hang động XYZ có một robot tự hành. Robot này có thể tự di chuyển, vẽ sơ đồ, chụp các hình ảnh trong lòng hang động và truyền thông tin về trung tâm. Thông tin về đường đi trong hang động được gửi về là chuỗi các chữ cái `D`, `T`, `N`, `B` tương ứng với việc đi theo các hướng Đông, Tây, Nam, Bắc trên la bàn được gắn trên robot (trong một đơn vị khoảng cách hướng đi không thay đổi quy chiếu trên mặt phẳng nằm ngang so với mặt đất, các hướng đi đưuọc quy định như hình bên dưới).                

<center>

![Imgur](https://i.imgur.com/pXUgyM7.png) 
</center>

Trong một lần robot làm nhiệm vụ khảo sát một hang động mới, sau một thời gian di chuyển (trong quá trình di chuyển một điểm trong hang có thể được robot đi qua nhiều lần) và truyền thông tin về trung tâm, robot gặp sự cố và không thể di chuyển về điểm xuất phát là cửa hang. Trung tâm muốn đưa robot về cửa hang bằng cách sử dụng những đoạn đường mà robot đã đi qua một cách nhanh nhất. 

***Yêu cầu:*** Cho chuỗi kí tự là thông tin đường đi của robot đã gửi về trung tâm. Hãy tìm độ dài đường đi ngắn nhất từ cửa hang đến được vị trí của robot bằng cách sử dụng thông tin đường đi ở trên?

## Input

- Gồm một dòng duy nhất gồm các kí tự `D`, `T`, `N`, `B` ghi liên tiếp nhau. 

## Constraints

- Độ dài chuỗi thông tin không vượt quá $10^4$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): Độ dài chuỗi nhỏ hơn hoặc bằng $5000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là độ dài đường đi ngắn nhất đã tìm được.

## Sample Input 1

```
DDTNDBBT
```

## Sample Output 1

```
4
```

## Explanation 1

Hình ảnh đường đi của robot (xuất phát từ điểm $A$, kết thúc ở điểm $G$):

<center>

![Imgur](https://i.imgur.com/PFNlznI.png)
</center>

Đường đi ngắn nhất để tới vị trí của robot là: $A \to B \to E \to F \to G$.


