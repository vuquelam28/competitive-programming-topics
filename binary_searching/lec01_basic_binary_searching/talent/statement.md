# Trung Tâm Bồi Dưỡng Tài Năng

Đất nước VN có $N$ thành phố, tất cả nằm dọc theo một con đường cao tốc. Trung tâm thành phố thứ $i$ có khoảng cách đến vị trí bắt đầu con đường cao tốc là $d_i \ (i=1,2,..,N)$. Với những thành tích vang dội của các đoàn Olympic nước VN vừa đạt được trên đấu trường quốc tế, chính phủ muốn thành lập một trung tâm bồi dưỡng tài năng. Một vấn đề quan trọng đang được xem xét đó là lựa chọn vị trí để xây dựng trung tâm. Nếu trung tâm được đặt ở vị trí có khoảng cách tính từ vị trí bắt đầu con đường cao tốc là p thì mức độ phù hợp được tính bằng:
$$∑_{i=1}^N w_i×|d_i-p|$$

<center>

trong đó $w_i$ là mức độ ưu tiên của thành phố thứ $i$.
</center>

Hiện tại, chính phủ đang đánh giá $M$ đề xuất xây dựng trung tâm tại các vị trí $p_1,p_2,…,p_M$.

***Yêu cầu:*** Cho các số nguyên dương $d_1,d_2,..,d_N; w_1,w_2,..,w_N$ và $M$ đề xuất vị trí xây dựng trung tâm $p_1,p_2,…,p_M$. Với mỗi đề xuất hãy tính mức độ phù hợp?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N,M$.
- Dòng thứ hai chứa $N$ số nguyên dương $d_1,d_2,..,d_N$.
- Dòng thứ ba chứa $N$ số nguyên dương $w_1,w_2,..,w_N$.
- Dòng thứ $k$ trong $M$ dòng tiếp theo chứa một số nguyên dương $p_k$ mô tả cho đề xuất thứ $k$.

## Constraints

- $1≤M,N≤10^5$.
- $0<d_i≤10^6;1≤i≤N$.
- $0<w_i≤10^3;1≤i≤N$.
- $0<p_k≤10^6;1≤k≤M$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $N≤10;M=1;d_i≤1000$.
- Subtask $2$ ($30\%$ số điểm): $N≤10^5;M≤10$.
- Subtask $3$ ($20\%$ số điểm): $N≤10^5;M≤10^5;w_i=1$.
- Subtask $4$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $M$ dòng (mỗi dòng tương ứng với một đề xuất), dòng thứ $k$ là giá trị phù hợp cho đề xuất thứ $k$.

## Sample Input 1

```
3 2
1 2 4
1 2 1
2
3
```

## Sample Output 1

```
3
5
```

## Sample Input 2

```
4 2
1 2 3 2
1 2 4 1
4
2
```

## Sample Output 2

```
13
5
```