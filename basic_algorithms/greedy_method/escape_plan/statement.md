# Kế Hoạch Vượt Ngục

Ai trong số chúng ta có lẽ cũng biết tới câu chuyện Jack và Cây đậu thần. Nhờ có hạt giống cây đậu thần, cậu bé nhà nghèo Jack đã trèo lên cây và tới được lâu đài của những gã khổng lồ. Tuy nhiên, do sơ suất mà Jack đã bị tóm bởi gã bảo vệ của lâu đài. Với cái đầu IQ $200$ của mình, Jack không chỉ vượt ngục thành công mà còn ẵm theo được một đống trang sức quý giá của lâu đài. Không may cho Jack là tên bảo vệ cũng khá tinh ranh, chỉ sau $x$ giờ kể từ khi cậu trốn thoát, hắn đã phát hiện ra và lập tức đuổi theo. Jack chạy theo đường thẳng với vận tốc $v$ mét/giờ, gã bảo vệ khổng lồ thì chạy với vận tốc $v_0$ mét/giờ đuổi theo, và quãng đường từ lâu đài tới cây đậu thần của Jack là $z$ mét.

Mặc dù gã bảo vệ chạy rất nhanh, nhưng hắn có một điểm yếu là không được thông minh cho lắm. Mỗi khi hắn bắt kịp Jack thì cậu chàng sẽ ném ra một món trang sức trong số trang sức mình trộm được, như vậy gã sẽ dừng lại nhặt món đồ lên và mang nó về lâu đài, tiếp tục dành thêm $y$ giờ để đánh bóng món trang sức đó rồi mới lại xuất phát từ lâu đài để tiếp tục đuổi theo Jack. Lưu ý rằng, nếu cùng lúc Jack tới được vị trí cây đậu thần mà gã khổng lồ cũng bắt kịp cậu thì coi như Jack đã trốn thoát thành công. 

***Yêu cầu:*** Hãy xác định số món trang sức tối thiểu mà Jack cần ném ra để cậu có thể an toàn tới được cây đậu thần? 

## Input

- Gồm $5$ số nguyên $v, v_0, x, y, z,$ trên cùng một dòng, phân tách nhau bởi dấu cách.

## Constraints

- $1 \le v, v_0 \le 100$.
- $1 \le x, y \le 10$.
- $1 \le z \le 1000$.

## Output

- Số nguyên duy nhất là số món trang sức tối thiểu mà Jack cần ném ra.

## Sample Input 1

```
1 2 1 1 8
```

## Sample Output 1

```
1
```

## Sample Input 2

```
1 2 1 1 10
```

## Sample Output 2

```
2
```

