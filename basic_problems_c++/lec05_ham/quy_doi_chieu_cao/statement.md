# Quy Đổi Chiều Cao

Trong buổi khám sức khỏe toàn trường XYZ, mỗi bạn học sinh đều được đo chiều cao. Tuy nhiên, ngôi trường này có một quy tắc khá kì lạ: Mặc dù kết quả đo chiều cao trên máy sẽ hiển thị theo đơn vị xăng-ti-mét (cm), nhưng khi ghi vào hồ sơ, nếu như là học sinh nữ thì bác sĩ lại ghi theo đơn vị mét (m), còn nếu là học sinh nam thì bác sĩ lại ghi theo đơn vị đề-xi-mét (dm).

***Yêu cầu:*** Cho trước danh sách học sinh và chiều cao của các bạn ở đơn vị xăng-ti-mét, hãy đưa ra chiếu cao ghi trên hồ sơ tương ứng của từng học sinh?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số luợng học sinh.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $t$ và $h$ - trong đó $t = 1$ tương ứng với học sinh nam, $t = 2$ tương ứng với học sinh nữ, còn $h$ là chiều cao ở đơn vị xăng-ti-mét của học sinh đó.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le h \le 200$.

## Output

- Trên $n$ dòng, mỗi dòng in ra chiều cao của học sinh theo đơn vị tương ứng với giới tính của học sinh đó. Kết quả được làm tròn tới $2$ chữ số sau dấu chấm thập phân.

## Sample Input 1

```
4
1 160
2 155
1 192
2 161 
```

## Sample Output 1

```
16.00
1.55
19.20
1.61
```

