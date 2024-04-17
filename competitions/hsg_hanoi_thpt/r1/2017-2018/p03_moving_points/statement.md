# Di Chuyển

Trên trục hoành của hệ trục tọa độ đặt $n$ phần tử tại các điểm có tọa độ nguyên khác nhau: $x_1,x_2,…,x_n$. Các phần tử này di chuyển về hướng dương (kí hiệu $1$) hoặc hướng âm (kí hiệu $-1$) với vận tốc không đổi là $1$ đơn vị dài trong $1$ đơn vị thời gian. Các phần tử bắt đầu di chuyển tại thời điểm $0$. Nếu hai phần tử gặp nhau tại một điểm nào đó thì chúng bị phá hủy và không ảnh hưởng đến quá trình di chuyển của các phần tử khác.

***Yêu cầu:*** Xác định tại thời điểm $T,$ trên trục hoành còn lại bao nhiêu phần tử đang di chuyển?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số điểm trên trục tọa độ.
- $n$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $x_i,h_i;$ trong đó $x_i$ là tọa độ của điểm thứ $i, h_i$ nhận giá trị $1$ hoặc $-1$ thể hiện điểm thứ $i$ đang di chuyển về hướng dương hay hướng âm.
- Dòng cuối cùng chứa số nguyên dương $T$ - thời điểm cần kiểm tra.

## Constraints

- $1≤n≤2×10^5$.
- $-10^9≤x_i≤10^9; \forall i: 1 \le i \le n$.
- $1≤T≤10^9$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10^3$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ghi ra một số nguyên duy nhất là số lượng các phần tử còn lại trên trục hoành tại thời điểm $T$.

## Sample Input 1

```
3
0 -1
-2 1
5 1
10
```

## Sample Output 1

```
1
```

## Explanation 1

Tại thời điểm $1,$ phần tử thứ nhất và phần tử thứ hai gặp nhau sau đó bị phá hủy. Do đó, tại thời điểm $10$ chỉ còn lại một phần tử.