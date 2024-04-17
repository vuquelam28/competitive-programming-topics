# Người Thắng Cuộc

Trong trò chơi thẻ bài OHNO, quy tắc tính điểm như sau:

- Mỗi lượt chơi có một người ghi điểm, hoặc bị thua điểm.
- Tại thời điểm kết thúc $n$ lượt chơi, nếu chỉ có một người có tổng điểm cao nhất, thì đó là người chiến thắng. Ngược lại, giả sử $m$ là tổng điểm cao nhất của một người chơi khi kết thúc trò chơi, thì người đầu tiên giành số điểm $\ge m$ sẽ là người chiến thắng.

Trong quá trình chơi, số điểm của người chơi ghi điểm hoặc thua điểm sẽ được hiển thị lên bảng điện tử dưới dạng "`name score`", trong đó `name` là tên của người chơi ghi điểm và `score` là số điểm đạt được trong lượt đó, điểm có thể âm nếu người đó chơi thua. 

***Yêu cầu:*** Cho bảng điểm hiển thị $n$ lượt chơi, bạn hãy viết chương trình tìm ra người chiến thắng khi trò chơi kết thúc?

## Input

- Dòng đầu tiên chứa số nguyên $n$ — số lượng lượt chơi.
- Trên $n$ dòng tiếp theo, dòng thứ $i$ chứa thông tin lượt chơi $i$ dưới dạng `name score` — trong đó $name$ là tên của người chơi gồm các kí tự viết thường và $score$ là số nguyên điểm của người chơi.

## Constraints

- $1 \le n \le 1000$.
- $1 \le |name| \le 32$.
- $-1000 \le score \le 1000$.

## Output

- Dòng duy nhất chứa tên của người thắng cuộc.

## Sample input 1

```
3
mike 3
andrew 5
mike 2
```

## Sample output 1

```
andrew
```

