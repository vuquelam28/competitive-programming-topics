# Siêu Trộm

Arsène Lupin là một nhân vật giả tưởng rất nổi tiếng trong các loạt truyện trinh thám của nhà văn người Pháp Maurice Leblanc. Trong truyện, Lupin là một siêu đạo chích có tài hóa trang và kĩ năng trộm cắp thượng thừa, thường xuyên giả dạng một quý ông lịch lãm rồi lấy trộm đồ của những người giàu có, đặc biệt là những kẻ keo kiệt.

Lần này, Lupin lẻn vào được kho đồ cổ của một tên lãnh chúa nổi tiếng keo kiệt. Kho đồ cổ này có một bộ sưu tập bình gốm gồm $N$ giá xếp, mỗi giá có một số lượng bình gốm nhất định theo hàng ngang, mỗi bình có giá trị riêng. Ở mỗi giá, các bình chỉ có thể lấy ra theo thứ tự liên tiếp từ hai đầu (tức là không được lấy một bình ở giữa ra). Khi một bình được lấy ra thì mới có thể lấy được các bình tiếp sau nó, và không được phép đặt lại một bình đã lấy xuống vào giá. 

Lupin rất ghét tên lãnh chúa này, nên hắn quyết định sẽ đập vỡ bộ sưu tập bình gốm của lãnh chúa. Tuy nhiên, do thời gian có hạn nên Lupin chỉ chọn ra $M$ bình để đập (tất nhiên phải lấy các bình lần lượt theo đúng quy tắc trên). Để tiết kiệm thời gian, khi lấy một bình xuống từ một giá thì Lupin sẽ đập ngay bình đó, rồi chọn bình tiếp theo,...cứ như vậy cho tới khi đủ $M$ bình.

***Yêu cầu:*** Hãy xác định xem tổng giá trị lớn nhất có thể của các bình mà Lupin sẽ đập đi, nếu hắn ta đập đủ $M$ bình?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N, M$ - số lượng giá chứa bình gốm và số bình Lupin sẽ đập.
- Trên $N$ dòng tiếp theo, dòng thứ $i$ mô tả về các bình gốm ở giá thứ $i$: 
    - Dòng đầu tiên chứa số nguyên dương $k_i$ - số bình ở giá thứ $i$.
    - Dòng thứ hai chứa $k_i$ số nguyên $v_1, v_2,..., v_{k_i}$ là giá trị của các bình; các số phân tách nhau bởi dấu cách.
- Tổng số bình trên các giá đảm bảo tối thiểu bằng $M$.

## Constraints

- $1 \le N \le 100$.
- $1 \le M \le 10^4$.
- $1 \le k_i \le 100; \forall i: 1 \le i \le N$.
- $1 \le v_j \le 100; \forall j: 1 \le j \le k_i$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $N, M \le 10; k_i \le 10$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là tổng giá trị tối đa có thể của $M$ bình mà Lupin sẽ đập đi.

## Sample Input 1

```	
2 3 
3 
3 7 2 
3 
4 1 5
```

## Sample Output 1

```
15
```

## Explanation 1

Chọn hai bình đầu tiên của giá thứ nhất và bình cuối cùng của giá thứ hai, tổng giá trị bình đập đi là $15$.
