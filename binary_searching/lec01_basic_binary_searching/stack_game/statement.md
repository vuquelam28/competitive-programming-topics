# Trò Chơi Trên Ngăn Xếp

Alexa có hai ngăn xếp chứa các số nguyên không âm, ngăn xếp $A$ chứa các số nguyên $(a_0,a_1,…,a_{M-1})$ và ngăn xếp $B$ chứa các số nguyên $(b_0,b_1,…,b_{N-1})$, vị trí $0$ thể hiện là số nguyên ở đỉnh ngăn xếp. Alexa thách đấu Nick một trò chơi như sau:
- Mỗi lượt chơi, Nick được phép loại đi số nguyên ở đỉnh của một trong hai ngăn xếp $A$ hoặc $B$.
- Nick sẽ lưu trữ tổng của các số bị loại đi.
- Nếu như ở một lượt nào đó, tổng các số Nick đã loại đi lớn hơn một số nguyên $X$ cho trước thì trò chơi sẽ kết thúc.
- Tổng điểm của Nick giành được là số lượng các số đã bị loại đi (không tính số cuối cùng làm cho tổng các số bị loại đi lớn hơn $X$).

***Yêu cầu:*** Hãy tính toán số điểm tối đa mà Nick có thể giành được ở mỗi ván đấu.

## Input

- Dòng đầu là số tự nhiên $T$ – số lượng ván đấu.
- $T$ nhóm dòng tiếp theo, mỗi nhóm dòng mô tả một ván đấu như sau:
    - Dòng đầu chứa ba số nguyên dương $M,N$ và $X$ – số lượng số nguyên trong ngăn xếp $A$, ngăn xếp $B$ và số nguyên $X$ giới hạn của ván đấu này.
	- Dòng tiếp theo chứa $M$ số nguyên không âm $a_0,a_1,…,a_{M-1}$ – các số trong ngăn xếp $A$.
    - Dòng cuối cùng chứa $N$ số nguyên không âm $b_0,b_1,…,b_{N-1}$ – các số trong ngăn xếp $B$.

## Constraints

- $1≤T ≤ 50$.
- $1≤M,N≤10^5$.
- $0≤a_i,b_j≤10^9;∀i:0≤i<M,∀j:0≤j<N$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le M, N, \le 100$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Đưa ra trên $T$ dòng, mỗi dòng là một số nguyên thể hiện số điểm lớn nhất mà Nick có thể giành được trong ván đấu tương ứng.

## Sample Input 1

```
1
5 4 10
4 2 4 6 1
2 1 8 5
```

## Sample Output 1

```
4
```

## Explanation 1

Ban đầu hai ngăn xếp như sau:

<center>

<img src="https://cdn.ucode.vn/uploads/2247/images/UHpIIzRc.png">
</center>

Và trong quá trình chơi trò chơi:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/fpcphYdA.png">
</center>