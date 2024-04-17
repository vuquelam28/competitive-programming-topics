# Hộp Đồ Chơi

Tuấn có $n$ chiếc hộp, hộp thứ $i$ có $a_i$ món đồ chơi. Bạn ấy muốn chọn một hộp bất kì và đem **tất cả** món đồ chơi trong hộp đó bỏ vào $n - 1$ hộp còn lại sao cho: trừ hộp Tuấn vừa chọn ra thì tất cả $n - 1$ hộp có số lượng đồ chơi bằng nhau. Nếu làm được như vậy thì Tuấn sẽ rất vui, ngược lại thì Tuấn sẽ cảm thấy buồn. 

Tuy nhiên, Tuấn chỉ được đem đồ chơi của hộp **được chọn** để bỏ vào các hộp khác, **không được** đem đồ chơi của $n - 1$ hộp không được chọn bỏ vào nhau. Khi đó, có một vài trường hợp Tuấn sẽ không thể làm số đồ chơi trong $n - 1$ hộp bằng nhau nên Tuấn quyết định mua thêm một lượng đồ chơi để bỏ vào các hộp khác (Tuấn có thể bỏ vào nhiều hộp khác nhau với số lượng tùy thích), với mục đích luôn luôn có thể cảm thấy "vui", bất kể là ban đầu Tuấn chọn hộp nào để bỏ hết đồ chơi ra.

***Yêu cầu:*** Xác định xem Tuấn cần mua thêm ít nhất bao nhiêu món đồ chơi để ***luôn luôn*** cảm thấy vui trong mọi trường hợp?

## Input

- Dữ liệu vào gồm nhiều test case, dòng đầu tiên chứa số nguyên $t$  — số lượng test cases. 
- Trên $t$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case theo cấu trúc:
    - Dòng thứ nhất của mỗi test case chứa số nguyên $n$ — số lượng hộp đồ chơi.
    - Dòng thứ hai của mỗi test case chứa $n$ số nguyên $a_i$  — số lượng đồ chơi trong hộp thứ $i$.
    
## Constraints

- $1 \le t \le 1000$.
- $2 \le n \le 10^5$.
- $0 \le a_i \le 10^9; \forall i: 1 \le i \le n$.
- Dữ liệu vào đảm bảo trong mỗi test tổng các giá trị $n$ không vượt quá $10^5$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le t \le 20; 1 \le n \le 10$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra kết quả của mỗi test case - số lượng đồ chơi ít nhất Tuấn cần mua để thêm vào.

## Sample input 1

```
3
3
3 2 2
4
2 2 3 2
3
0 3 0
```

## Sample output 1

```
1
0
3
```

## Explanation 1

Test case đầu tiên Tuấn mua thêm một món đồ chơi và bỏ nó vào hộp $1$. Lúc này số lượng đồ chơi trong các hộp sẽ là $a = [4, 2, 2],$ Tuấn sẽ đem $2$ món đồ chơi của hộp thứ $3$ bỏ vào hộp thứ $2$ và số lượng đồ chơi được cân bằng.

Test case thứ hai Tuấn không cần phải mua thêm đồ chơi. Tuấn chỉ cần đem từng món đồ chơi trong hộp thứ $3$ đặt vào các hộp còn lại.

Test case cuối cùng, Tuấn chọn hộp thứ $2$ và thêm $3$ món đồ chơi vào các hộp còn lại. Lúc này $a = [2, 3, 1],$ Tuấn đem $1$ món của hộp được chọn bỏ vào hộp đầu tiên, phần còn lại bỏ vào hộp cuối cùng.

