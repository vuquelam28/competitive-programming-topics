# Average

*Lưu ý: Hãy giải bài tập này bằng phương pháp cấp phát bộ nhớ động và giải phóng vùng nhớ khi chương trình kết thúc.*

Đã tới lúc tổng kết năm học, thầy giáo có điểm của $n$ bạn học sinh được đánh số thứ tự từ $1$ tới $n$ trên thang điểm $100$. Thầy muốn in ra danh sách thứ hạng của các học sinh theo thứ tự điểm từ cao xuống thấp (nếu hai học sinh có điểm bằng nhau, ai có số thứ tự cao hơn sẽ đứng trước). 

***Yêu cầu:*** Do dữ liệu là rất lớn, bạn hãy lập trình để giải quyết vấn đề trên giúp thầy giáo?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên miêu tả điểm số của học sinh có số thứ tự lần lượt từ $1$ tới $n$.

## Constraints 

- $1 \le n \le 10^3$.
- Điểm số của các học sinh đều là số nguyên trong khoảng $[0,100]$.

## Output

- In ra $n$ dòng, dòng thứ $i$ gồm $2$ số nguyên là số thứ tự và điểm số tương ứng của học sinh cao điểm thứ $i$.

## Sample Input 1

```
7
4 1 1 4 2 5 3
```

## Sample Output 1

```
6 5
4 4
1 4
7 3
5 2
3 1
2 1
``` 

## Explanation 1

Học sinh có điểm cao nhất là $5$ mang số thứ tự $6$, học sinh mang số thứ tự $1$ và $4$ bằng điểm nhau nên học sinh có số thứ tự cao hơn được in ra trước.