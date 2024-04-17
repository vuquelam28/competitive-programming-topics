# Thuốc Bổ

Ban đầu, bạn có một cái vạc rỗng, và bạn muốn nấu một ít thuốc bổ. Thuốc bổ bao gồm hai thành phần: tinh chất ma thuật và nước, trong đó chứa $k\%$ tinh chất và $(100 - k)\%$ nước.

Trong mỗi thao tác, bạn có thể đổ một đơn vị nước hoặc một đơn vị tinh chất ma thuật vào trong vạc.

***Yêu cầu:*** Hỏi bạn phải thực hiện ít nhất bao nhiêu thao tác để tạo ra thuốc bổ? Bạn không cần quan tâm đến thể tích của thuốc bổ, chỉ quan tâm tỉ lệ phần trăm giữa nước và tinh chất ma thuật.

## Input

- Dòng thứ nhất chứa số nguyên $t$ - số lượng test cases.
- Trên $t$ dòng tiếp theo, mỗi tương ứng với một test case, chứa số $k$ là phần trăm của thành phần tinh chất ma thuật cần có để tạo ra thuốc bổ.

## Constraints

- $1 \le t, k \le 100$.

## Output

- In ra mỗi dòng tương ứng với kết quả của một test case, số thao tác ít nhất cần thực hiện để tạo ra thuốc bổ.

## Sample input 1

```
3
3
100
25
```

## Sample output 1

```
100
1
4
```

## Explanation 1

Trong test case thứ nhất, bạn cần đổ vào $3$ đơn vị tinh chất và $97$ đơn vị nước. 

Test case thứ hai, bạn đổ một đơn vị tinh chất.

Test case thứ ba, bạn đổ $1$ đơn vị tinh chất và $3$ đơn vị nước.