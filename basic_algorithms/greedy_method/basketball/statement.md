# Chơi Bóng Rổ

Trường THPT X tổ chức cuộc thi ném bóng rổ. Mỗi lần ném trúng sẽ được $2$ hoặc $3$ điểm tùy vào khoảng cách ném. Ban tổ chức đặt ra quy định, nếu khoảng cách thực hiện cú ném không vượt quá $D$ mét thì được $2$ điểm, ngược lại thì được $3$ điểm (với $D$ là một số nguyên không âm). Hiện tại có hai đội đang thi đấu với nhau là đội A và đội B, mỗi đội đều đã ném một số lượt và được BTC ghi nhận lại dữ liệu về khoảng cách của các lần ném trúng.

***Yêu cầu:*** Hãy giúp BTC chọn giá trị của $D$ sao cho tổng số điểm của đội A trừ đi tổng số điểm của đội B đạt cực đại?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ – số lần ném trúng của đội A.
- Dòng thứ hai chứa $N$ số nguyên dương $a_1,a_2,…,a_N$ – khoảng cách các lần ném trúng của đội A.
- Dòng thứ ba chứa số nguyên dương $M$ – số lần ném trúng của đội B.
- Dòng cuối cùng chứa $M$ số nguyên dương $b_1,b_2,…,b_N$ – khoảng cách các lần ném trúng của đội M.

## Constraints

- $1≤N,M≤2×10^5$.
- $1≤a_i≤2×10^9;∀i:1≤i≤N$.
- $1≤b_j≤2×10^9;∀j:1≤j≤M$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1≤N,M≤1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Hai số nguyên ở dạng $X:Y$ với $X$ là số điểm của đội A,$Y$ là số điểm của đội B sao cho $X-Y$ đạt cực đại. Nếu tồn tại nhiều kết quả thì đưa ra kết quả có giá trị $X$ lớn nhất.

## Sample Input 1

```
5
3 7 9 2 1
2
13 12
```

## Sample Output 1

```
15:6
```

## Sample Input 2

```
3
6 8 10 
3
2 4 5
```

## Sample Output 2

```
9:6
```