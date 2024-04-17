# Biên Giới Cây

Biên giới giữa hai nước X và Y có dạng một đoạn thẳng với độ dài $N-1$ mét. Vua nước X vì muốn che giấu bí mật quốc gia đã trồng trên đường biên giới $N$ cây tán lá xum xuê (các cây cách đều nhau với khoảng cách một mét). Vua nghĩ rằng nhờ hàng cây này mà các điệp viên của vua nước Y không thể do thám nước mình được. Để chăm sóc các cây này, vua sai một người làm vườn mỗi buổi sáng chọn cây thưa lá nhất (có số lá ít nhất) và tưới một loại phân bón đặc biệt (nếu có nhiều cây thưa lá nhất thì người làm vườn sẽ chọn cây đầu tiên, lưu ý cây đó phải còn sống). Phân bón có bán kính tác dụng là $1$ mét (nghĩa là sẽ tác dụng lên từ $1$ đến $3$ cây).

Tuy nhiên, vua nước Y quyết định chống lại chiến lược này và thuê một người làm vườn khác. Mỗi buổi chiều, người làm vườn này tưới phân bón lên cùng cái cây đã được người làm vườn nước X tưới vào buổi sáng, nhưng bằng một loại phân bón khác. Loại phân bón này làm chết tất cả các cây trong bán kính $1$ mét!

***Yêu cầu:*** Bạn được bộ trưởng tài chính của vua nước Y thuê để giúp tính xem sau bao nhiêu ngày thì tất cả các cây đều bị chết. Hãy lập trình tính giá trị này?

## Input

- Dòng đầu tiên chứa số lượng cây $N$. 
- Dòng thứ hai chứa $N$ số nguyên $a_i$ - số lượng lá trên các cây (theo thứ tự chúng được trồng từ trái sang phải). 

## Constraints

- $1≤N≤10^5$.
- $1≤a_i≤10^5$.

## Output

- In ra số ngày mà sau đó tất cả các cây đều bị chết.

## Sample Input

```
3
2 2 3
```

## Sample Output

```
2
```
