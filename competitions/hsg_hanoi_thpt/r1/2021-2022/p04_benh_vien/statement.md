# Bệnh Viện

Trong một đất nước có $N$ thành phố được đánh số từ $1$ tới $N,$ các thành phố được nối với nhau bởi $N-1$ con đường hai chiều, đảm bảo hai thành phố bất kì đi được tới nhau. Có $M$ thành phố đang có dịch bệnh. Người ta muốn chọn thành phố để xây dựng bệnh viện dã chiến sao cho: chỉ số an toàn từ thành phố đó tới thành phố đang có dịch bệnh bất kì không lớn hơn $K$ ($K$ là một số cho trước và chỉ số an toàn giữa hai thành phố $X,Y$ là tổng số con đường trên đường đi ngắn nhất từ $X$ tới $Y$).

***Yêu cầu:*** Hãy lập trình để tính xem có thể xây dựng bệnh viện dã chiến ở bao nhiêu thành phố?

## Input

- Dòng đầu tiên chứa ba số nguyên dương $N,M,K$ mô tả số thành phố, số thành phố có dịch bệnh và số $K$. 
- Trên $N-1$ dòng tiếp theo chứa hai số nguyên $u$ và $v$ mô tả có con đường từ thành phố $u$ tới $v$.
- Dòng tiếp theo gồm $M$ số nguyên $x$ miêu tả những thành phố đang có dịch bệnh $(1 \le x \le n)$.

## Constraints

- $1 \le K \le M \le N \le 10^5$.
- $1 \le u, v \le N$.
- $1 \le x \le N$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $N \le 500$.
- Subtask $2$ ($20\%$ số điểm): $N \le 10^4$.
- Subtask $3$ ($20\%$ số điểm): Mỗi thành phố chỉ đi được tới tối đa hai thành phố khác.
- Subtask $4$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là số thành phố thỏa mãn để có thể xây dựng bệnh viện dã chiến.

## Sample Input 1

```
6 2 2 
1 2
3 2
3 5
4 2
5 6
1 3
```

## Sample Output 1

```
4
```

## Explanation 1

<center>

![Imgur](https://i.imgur.com/vVKor3p.png)
</center>

Có bốn thành phố có thể xây bệnh viện là $1,2,3,4$.

## Sample Input 2

```
6 3 2
1 2
3 2
3 5
4 2
5 6
1 3 5
```

## Sample Output 2

```
2
```

## Explanation 2

<center>

![Imgur](https://i.imgur.com/debggco.png)
</center>

Có bốn thành phố có thể xây bệnh viện là $2,3$.Thành phố $4$ không thể xây dựng bệnh viện dã chiến do khoảng cách giữa nó tới thành phố đang dịch bệnh $5$ là $3$.