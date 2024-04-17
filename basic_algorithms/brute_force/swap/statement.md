# Đổi Chỗ

Theo nghiên cứu mới nhất của các giáo sư tại trường đại học Bôn Ba, những người thích học Sử thì thường không thích học Tin còn những người thích học Tin thì chắc chắn không thích học Sử. Một lần, nhà trường muốn kiểm tra năng lực của học sinh. Ban giám hiệu quyết định chọn ra $N$ em thích học Sử và $N$ em thích học Tin tham gia, xếp thành một hàng. Vì tính tích cực, nhanh nhẹn nên những em thích học Tin đã nhanh chân đứng xếp hàng trước cả N em thích học Sử. Thấy vây, thầy giáo phụ trách rất không vừa lòng bèn ra lệnh thực hiện đổi chỗ $K$ lần. Lần thứ $i$ thầy cho đổi chỗ $2$ em ở vị trí $a_i$ và $b_i$. Sau mỗi lần đổi chỗ, thầy rất muốn biết còn bao nhiêu em thích học Tin vẫn đứng ở nửa đầu của hàng.

***Yêu cầu:*** Viết chương trình giúp thầy giáo trả lời được ngay câu hỏi trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa số nguyên $K$ – số lần đổi chỗ.
- $K$ dòng tiếp theo, mỗi dòng ghi một cặp số nguyên dương $a_i,b_i$.

## Constraints

- $1≤N≤10^5$.
- $0≤K≤10^5$.
- $1≤a_i,b_i≤2×N$.

## Output

- Đưa ra trên $K$ dòng, dòng thứ $i$ ghi một số nguyên là số lượng học sinh thích học Tin vẫn còn đứng ở nửa đầu hàng sau lần đổi chỗ thứ $i$.

## Sample Input

```
2 
4
1 3
3 4
4 1
2 3
```

## Sample Output

```
1
1
2
1
```