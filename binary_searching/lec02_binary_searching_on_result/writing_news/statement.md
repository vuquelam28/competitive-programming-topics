# Viết Báo

Hanna là một cô gái với niềm đam mê viết lách. Sau nhiều năm học tập vất vả, nay Hanna đã trở thành nhà báo và có cho mình một kho bài viết đồ sộ gồm $n$ bài nghiên cứu, bài thứ $i$ có độ nổi tiếng trong giới nhà báo là $a_i$. 

Tại đất nước mà Hanna sinh sống, sự thành công của một nhà báo được tính bằng ***chỉ số nổi tiếng*** $H$. Cách tính chỉ số này như sau: $H$ là số nguyên lớn nhất sao cho nhà báo đó có ít nhất $H$ bài nghiên cứu, mỗi bài trong số đó có độ nổi tiếng ít nhất là $H$. Ví dụ, một nhà báo có $4$ bài viết với độ nổi tiếng lần lượt là $(1, 100, 2, 3)$ thì chỉ số nổi tiếng của nhà báo này là $H = 2,$ còn nếu độ nổi tiếng của các bài viết lần lượt là $(1, 100, 3, 3)$ thì chỉ số nổi tiếng của nhà báo này là $H = 3$.

Để tăng sự thành công của mình, Hanna quyết định viết thêm tối đa $k$ bài đăng PR, mỗi bài PR sẽ quảng bá và tăng độ nổi tiếng cho một số bài nghiên cứu của cô. Tuy nhiên, do số lượng trang viết có hạn, Hanna chỉ có thể tăng độ nổi tiếng cho tối đa $l$ bài nghiên cứu trong một bài PR. Tất nhiên, trong một bài PR sẽ không được quảng bá cho cùng một bài nghiên cứu hai lần, nhưng một bài nghiên cứu có thể được quảng bá trong nhiều bài PR. 

***Yêu cầu:*** Hãy xác định chỉ số nổi tiếng $H$ lớn nhất mà Hanna có thể đạt được sau khi viết các bài PR cho các bài nghiên cứu của mình?

## Input

- Dòng đầu tiên chứa ba số nguyên $n, k$ và $l$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $0 \le k, l \le 10^5$.
- $0 \le a_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra chỉ số nổi tiếng lớn nhất mà Hanna có thể đạt được.

## Sample Input 1

```
4 1 4
1 100 1 1
```

## Sample Output 1

```
2
```

## Explanation 1

Trong ví dụ này, Hanna có thể viết tối đa $1$ bài PR, quảng bá cho tối đa $4$ bài nghiên cứu trong bài PR đó. Nếu Hanna chọn quảng bá cho $1$ trong $3$ bài nghiên cứu thứ nhất, thứ ba và thứ tư trong bài PR duy nhất này thì chỉ số nổi tiếng của cô sẽ trở thành $H = 2$.

## Sample Input 2

```
4 4 1
1 100 1 1
```

## Sample Output 2

```
3
```

## Explanation 2

Trong ví dụ này, Hanna có thể viết tối đa $4$ bài PR, quảng bá cho tối đa $1$ bài nghiên cứu trong mỗi bài PR. Nếu Hanna viết $2$ bài PR để quảng cáo cho bài nghiên cứu thứ nhất và $2$ bài PR để quảng bá cho bài nghiên cứu thứ $3,$ thì chỉ số nổi tiếng của cô sẽ trở thành $H = 3$.