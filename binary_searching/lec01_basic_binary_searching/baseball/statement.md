# Chơi Bóng Chày

Người nông dân John có một đàn bò gồm $N$ con đứng thành một hàng, mỗi con đứng ở một vị trí khác nhau (có thể coi như một trục số). Chúng đang luyện tập ném bóng chày để chuẩn bị cho một trận đấu quan trọng với những con bò láng giềng.

Khi John theo dõi, ông ta nhận ra cứ một nhóm ba con bò $(X,Y,Z)$ sẽ thực hiện hai cú ném: Con bò $X$ ném trái bóng cho con bò $Y$ ở bên phải cô ta, và con bò $Y$ ném trái bóng cho con bò $Z$ ở bên phải cô ta. John nhận xét rằng lần ném thứ hai luôn luôn có độ dài không vượt quá hai lần so với lần ném đầu tiên và không nhỏ hơn khoảng cách của lần ném đầu tiên.

***Yêu cầu:*** Hãy giúp John đếm xem có bao nhiêu bộ ba các con bò $(X,Y,Z)$ thỏa mãn nhận xét của anh ta?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ – số lượng con bò.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa số tự nhiên $x_i$ – tọa độ của con bò thứ $i$.

## Constraints

- $3≤N≤1000$.
- $0≤x_i≤10^9$.
	
## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1≤N≤500$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số lượng bộ ba con bò $(X,Y,Z);$ trong đó con bò $Y$ nằm bên phải con bò $X,$ con bò $Z$ nằm bên phải con bò $Y$ và khoảng cách $YZ$ nằm giữa khoảng cách $XY$ và $2XY$ (bao gồm cả hai giá trị này).

## Sample Input

```
5
3
1
10
7
4
```

## Sample Output

```
4
```