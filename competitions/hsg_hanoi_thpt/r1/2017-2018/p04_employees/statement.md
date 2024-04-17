# Nhân Viên

Công ty XYZ có $n$ người đánh số từ $1$ tới $n$. Giám đốc có cấp cao nhất và có số thứ tự là $n$. Các nhân viên có số thứ tự từ $1$ tới $n-1$. Mô hình tổ chức của công ty như sau: Mỗi nhân viên có duy nhất một cấp trên trực tiếp. Giám đốc có một danh sách ghi lại cấp trên trực tiếp của mỗi nhân viên từ nhân viên $1$ đến nhân viên $n-1$.

Công ty muốn cắt giảm nhân viên theo nguyên tắc sau: Nếu một nhân viên bất kỳ bị cắt giảm thì tất cả các nhân viên cấp dưới của nhân viên đó cũng bị cắt giảm. Riêng giám đốc sẽ không bị cắt giảm. Có thể không có nhân viên nào bị cắt giảm.

***Yêu cầu:*** Xác định số lượng phương án cắt giảm nhân viên khác nhau của công ty thỏa mãn các điều kiện trên? 

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$.
- $n-1$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên dương $b_i$ mô tả cấp trên trực tiếp của nhân viên $i$ là nhân viên $b_i / (1≤b_i≤n; b_i≠i)$.

## Constraints

- $2 \le n \le 10^6$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $n \le 10^3$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ghi một số nguyên duy nhất là phần dư khi chia số phương án cắt giảm nhân viên khác nhau cho $10^9+7$. Hai phương án gọi là khác nhau khi tập nhân viên còn lại khác nhau.

## Sample Input 1

```
4
4
3
4
```

## Sample Output 1

```
6
```

## Explanation 1

Cấp trên của nhân viên $1$ là giám đốc (có số thứ tự $4$). Cấp trên của nhân viên $2$ là nhân viên $3$. Cấp trên của nhân viên $3$ là giám đốc (có số thứ tự $4$).

Nếu cắt giảm nhân viên $\{3\}$ thì nhân viên $\{2\}$ cũng bị cắt giảm.

Nếu cắt giảm hai nhân viên $\{1,3\}$ thì nhân viên $\{2\}$ cũng bị cắt giảm.

Có tất cả $6$ phương án cắt giảm nhân viên là: $∅,\{1\},\{2\},\{1,2\},\{2,3\},\{1,2,3\}$.

