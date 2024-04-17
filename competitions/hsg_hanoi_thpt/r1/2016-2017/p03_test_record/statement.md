# Hồ Sơ Xét Nghiệm

Để xác định nguyên nhân gây ra một số bệnh lạ, các nhà khoa học sử dụng kết quả xét nghiệm máu của $n$ người được lưu tại $n$ hồ sơ ở một bệnh viện. Để đối chứng, các nhà khoa học sử dụng hồ sơ của cả người có bệnh và người không có bệnh. Các hồ sơ xét nghiệm được đánh số từ $1$ tới $n$. Trong các hồ sơ xét nghiệm, có sự xuất hiện các virus thuộc $m$ loại được đánh số thứ tự từ $1$ đến $m$. Mỗi bệnh do một loại virus gây ra. Các nhà khoa học mong muốn xếp mỗi loại virus vào một trong ba nhóm sau đây:
- **Nhóm 1** bao gồm các virus không có khả năng gây ra bất kỳ bệnh nào. Các virus thuộc nhóm $1$ là những virus xuất hiện trong ít nhất một hồ sơ xét nghiệm của người không có bệnh nào đó.
- **Nhóm 2** bao gồm các virus có khả năng gây ra một bệnh nào đó.
- **Nhóm 3** bao gồm các virus còn lại chưa thể xác định được có khả năng gây bệnh hay không. 

***Yêu cầu:*** Căn cứ kết quả xét nghiệm hiện có, hãy phân loại các virus thành ba nhóm như trên?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m, n$.
- Trên $n$ dòng tiếp theo, dòng thứ $i \ (1 \le i \le n)$ chứa $m + 1$ số, trong đó $t_1,t_2, \dots,t_m$ nhận giá trị $0$ hoặc $1$ với ý nghĩa: Nếu $t_j=1$ thì virus mang số hiệu $j$ xuất hiện trong hồ sơ thứ $i$ và không xuất hiện nếu $t_j=0; t_{m+1}=1$ nếu hồ sơ xét nghiệm là của người bị bệnh và $t_{m+1}=0$ nếu hồ sơ xét nghiệm là của người không bị bệnh.

## Constraints

- $1 \le m \le 100$.
- $1 \le n \le 10^4$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Dòng 1: Ghi số lượng các virus thuộc nhóm $1$ và tiếp theo là chỉ số của các virus đó theo thứ tự tăng.
- Dòng 2: Ghi số lượng các virus thuộc nhóm $2$ và tiếp theo là chỉ số của các virus đó theo thứ tự tăng.
- Dòng 3: Ghi số lượng các virus thuộc nhóm $3$ và tiếp theo là chỉ số của các virus đó theo thứ tự tăng.

## Sample Input 1

```
3 3
1 0 0 0
1 1 1 1
0 1 0 0
```

## Sample Output 1

```
2 1 2
1 3
0
```

## Explanation 1

Căn cứ $3$ hồ sơ xét nghiệm:
- Có $2$ virus thuộc nhóm $1$ là các virus thứ $1$ và thứ $2$.
- Có $1$ virus thuộc nhóm $2$ là virus thứ $3$. 
- Không có virus nào thuộc nhóm $3$.

