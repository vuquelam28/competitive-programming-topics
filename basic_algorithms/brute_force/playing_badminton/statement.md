# Chơi Cầu Lông

Trong một giải cầu lông giao hữu, có $n$ vận động viên tham dự với chỉ số sức mạnh từ $1$ tới $n$. Dựa trên bốc thăm, ban đầu $n$ vận động viên đứng xếp thành một hàng dọc theo thứ tự lộn xộn. Sau đó, thứ tự thi đấu sẽ như sau:

- Hai vận động viên đứng ở đầu hàng sẽ thi đấu với nhau.
- Vận động viên thua sẽ đi xuống cuối hàng, và vận động viên thắng ở lại tiếp tục thi đấu với vận động viên kế tiếp trong hàng. Biết rằng, vận động viên thua là vận động viên có chỉ số sức mạnh nhỏ hơn.

Việc thi đấu sẽ diễn ra như vậy cho tới khi có một vận động viên giành chiến thắng $k$ trận đấu liên tiếp, người đó sẽ là nhà vô địch.

***Yêu cầu:*** Tìm ra vận động viên giành chức vô địch?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng vận động viên.
- Dòng thứ hai chứa số nguyên dương $k$ - số trận thắng liên tiếp cần thiết để vô địch.
- Dòng thứ ba chứa $n$ số nguyên là một hoán vị của các số từ $1$ tới $n$ - chỉ số sức mạnh của các vận động viên theo thứ tự đứng của họ.

## Constraints

- $2 \le k < n \le 10^5$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $2 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số hiệu của vận động viên thắng cuộc.

## Sample Input 1

```
5 
2
2 1 3 4 5
```

## Sample Output 1

```
5
```

## Sample Input 2

```
3
2
3 1 2
```

## Sample Output 2

```
3
```