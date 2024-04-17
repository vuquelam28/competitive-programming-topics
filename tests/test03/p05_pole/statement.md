# Cột Điện

Công ty điện lực XYZ có nhiệm vụ cung cấp điện cho thành phố VT. Để cung cấp điện cho thành phố, công ty đã cho lắp đặt một hệ thống gồm $N$ cột điện được đánh số theo thứ tự từ $1$ tới $N,$ cột điện thứ $i$ có chiều cao $h_i,$ có các dây điện nối giữa các cặp cột điện liền kề, tức là nối từ cột $1$ đến cột $2,$ từ cột $2$ đến cột $3,...,$ và từ cột $N - 1$ tới cột $N$.

Vì mĩ quan đô thị, thành phố VT đã đưa ra quyết định sẽ thu của công ty XYZ một khoản chi phí cho hai cột điện liền kề $i$ và $i + 1$ là $c\times |h_i - h_{i + 1}|$ (với $c$ là chi phí cho mỗi đơn vị chênh lệch chiều cao giữa hai cột liền kề). Như vậy, tổng chi phí mà công ty XYZ phải nộp sẽ là:
$$S = \sum_{i = 1}^{N - 1}c \times |h_i - h_{i + 1}|$$

Để giảm thiểu chi phí, lãnh đạo công ty đã quyết định chọn giải pháp lắp đặt nâng chiều cao một số cột điện. Tuy nhiên, nếu cột điện $i$ nâng chiều cao thêm $x$ đơn vị thì công ty phải mất một khoản chi phí phát sinh là $x^2$.

***Yêu cầu:*** Cho biết $N, c$ và các chiều cao ban đầu $h_i \ (1 \le i \le N),$ hãy giúp công ty XYZ tính chi phí $S$ thấp nhất khi công ty thực hiện giải pháp nâng chiều cao cột điện nói trên?

## Input

- Dòng đầu tiên chứa hai số nguyên $N, c$ phân tách nhau bởi một dấu cách.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên $h_i$ - chiều cao ban đầu của cột điện thứ $i$.

## Constraints

- $1 \le N\le 10^4$.
- $1 \le c \le 10^6$.
- $1 \le h_i \le 1000; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $N \le 10; h_i \le 3$.
- Subtask $2$ ($40\%$ số điểm): $N \le 1000; h_i \le 1000$.
- Subtask $3$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là chi phí thấp nhất mà công ty XYZ phải đóng cho thành phố VT.

## Sample Input

```
5 2
2
3
5
1
4
```

## Sample Output

```
15
```

## Explanation

Nâng cột $1$ thêm $1$ đơn vị, cột $4$ thêm $2$ đơn vị. Khi đó chiều cao các cột lần lượt là: $\{3, 3, 5, 3, 4\}$. Tổng chi phí công ty phải trả là: 
$$S = 2 \times (0 + 2 + 2 + 1) + 1^2 + 2^2 = 15$$


