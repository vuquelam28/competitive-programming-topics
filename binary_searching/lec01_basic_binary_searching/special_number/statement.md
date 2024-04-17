# Số Đặc Biệt

Thạc sĩ Hải Lệ mới tìm ra một loại số rất đặc biệt và tự lấy tên mình để đặt cho loại số đó là ***Số Hải Lệ***. Một số nguyên dương $N$ được gọi là ***số Hải Lệ*** nếu $N$ thỏa mãn hai tính chất sau: 

- $N$ chia hết cho $3$.
- $N$ có đúng $9$ ước nguyên dương phân biệt.

Thạc sĩ Lệ đang muốn khảo sát mật độ các số đặc biệt như trên để phục vụ cho nghiên cứu của mình. Thật may mắn vì hiện tại kỳ thi Ucode Monthly Challenge đang diễn ra, nên thạc sĩ đã nhờ các bạn thí sinh giúp đỡ mình trong công việc này.

***Yêu cầu:*** Thạc sĩ Lệ có một bảng gồm các cặp số nguyên (a,b) cần khảo sát, hãy giúp cô đếm số lượng ***số Hải Lệ*** thuộc đoạn $[a,b]?$

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ – số lượng bộ số cần khảo sát.
- $T$ dòng tiếp theo, mỗi dòng chứa một cặp số nguyên dương $(a,b)$.

## Constraints

- $1≤T≤10^6$.
- $1≤a≤b≤10^{12}$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1≤a≤b≤10^3;T=1$.
- Subtask $2$ ($25\%$ số điểm): $1≤a≤b≤10^3;1≤T≤1000$.
- Subtask $3$ ($25\%$ số điểm): $1≤a≤b≤10^6;T=1$.
- Subtask $4$ ($25\%$ số điểm): $1≤a≤b≤10^{12};1≤T≤10^6$.

## Output

- Đưa ra $T$ số nguyên trên $T$ dòng là số lượng ***số Hải Lệ*** thuộc mỗi đoạn $[a,b]$ tương ứng cần khảo sát.

## Sample Input 1

```
2
1 10
220 230
```

## Sample Output 1

```
0
1
```