# Bim Bim

Lớp 5A đang có hoạt động ngoại khóa. Cô giáo cho mọi người một trò chơi như sau: $n$ học sinh ngồi thành vòng tròn, mỗi học sinh được đánh số theo thứ tự theo chiều của kim đồng hồ: học sinh $1$ ngồi bên trái học sinh $2$, học sinh $3$ ngồi bên trái học sinh $2, \dots$học sinh $1$ ngồi bên phải học sinh $n$.

Cô giáo có $m$ gói bim bim. Bắt đầu từ học sinh $1,$ cô di chuyển theo chiều kim đồng hồ để phát bim bim cho từng bạn theo nguyên tắc học sinh thứ $i$ nhận được $i$ gói. Sau khi phát xong cho bạn thứ $n,$ nếu số gói bim bim vẫn còn thì cô giáo sẽ bắt đầu lại từ bạn thứ $1$. Nếu đi đến học sinh thứ $i$ mà số lượng bim bim không đủ để phát cho bạn ấy, trò chơi sẽ kết thúc và cô giáo giữ phần còn lại. 

***Yêu cầu:*** Cho biết số lượng $n$ học sinh và $m$ gói bim bim, hãy tính số lượng gói bim bim còn lại cô giáo sẽ giữ sau khi trò chơi kết thúc?

## Input

- Dòng thứ nhất ghi số nguyên dương $n$ là số lượng học sinh.
- Dòng thứ hai ghi số nguyên dương $m$ là số lượng gói bim bim.

## Constraints

- $1 \leq n \leq 50$. 
- $1 \leq m \leq 1000$. 

## Output

- In ra một dòng duy nhất là số lượng số gói bimbim còn lại cô giáo sẽ giữ khi trò chơi kết thúc.

## Sample input 1

```
4 
11
```

## Sample output 1

```
0
```

## Explanation 1

Trong ví dụ 1, cô giáo sẽ phát một vòng thứ nhất $1 + 2 + 3 + 4 = 10$. Số bimbim còn lại là $1$, cô sẽ bắt đầu lại và phát cho bạn thứ $1$, số bimbim còn lại là $0$, trò chơi kết thúc.


## Sample input 2

```
3 
8
```

## Sample output 2

```
1
```

## Explanation 2

Ở ví dụ 2, ở vòng di chuyển đầu tiên cô đưa $1 + 2 + 3 = 6$ gói bimbim cho mỗi bạn, còn lại $2$ gói. Sau đó lặp lại, cô giáo đưa $1$ gói cho bạn thứ $1$ và số lượng bimbim còn lại là $1$, không đủ để đưa cho bạn thứ $2$ và trò chơi kết thúc, cô giáo giữ lại $1$ gói bimbim.

## Sample input 3

```
17 107
```

## Sample output 3

```
2
```
