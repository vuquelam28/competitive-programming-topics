# Gà Chó

Chúng ta đều biết bài toán cổ sau:
<center>

Vừa gà vừa chó
Bó lại cho tròn
Ba mươi sáu con
Một trăm chân chẵn
Hỏi có bao nhiêu con gà, bao nhiêu con chó?
</center>

***Yêu cầu:*** Phát triển bài toán lên thành có tổng cộng $N$ con vừa gà vừa chó và $M$ cái chân, hãy đếm số lượng gà và chó mỗi loại?

***Lưu ý:*** Hãy sử dụng vòng lặp để giải bài toán chứ đừng giải phương trình, sẽ mất đi mục đích luyện tập chính của bài toán!

## Input

- Một dòng duy nhất chứa hai số nguyên dương $N$ và $M$.

## Constraints

- $1 \le N \le 1000$.
- $1 \le M \le 4\times N$.

## Output

- Gồm hai số nguyên dương lần lượt là số gà và số chó mỗi loại, phân tách nhau bằng dấu cách. Nếu có nhiều đáp án thì chọn đáp án nào có số gà ít nhất. Nếu không tồn tại đáp án thì đưa ra $-1$.

## Sample Input 1

```
36 100
```

## Sample Output 1

```
22 14
```

## Explanation 1

Có $22$ con gà và $14$ con chó. Tổng số chân là $22 \times 2 + 14 \times 4=100$. Đây là phương án có số gà ít nhất.

