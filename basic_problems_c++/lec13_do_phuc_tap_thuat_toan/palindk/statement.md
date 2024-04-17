# Palindk

Một xâu được gọi là xâu đối xứng nếu đọc xâu đó từ trái sang phải hoặc đọc từ phải sang trái đều như nhau. Ví dụ:
- `aba`, `xyyx`, `zz` là xâu đối xứng.
- `abc`, `xyzy`, `contest` không phải là xâu đối xứng.

Cho xâu $s$ chỉ gồm các kí tự in thường và số nguyên dương $k$. Gọi xâu $t$ là xâu thu được bằng cách viết xâu $s$ lặp lại liên tiếp $k$ lần. 

***Yêu cầu:*** Hãy cho biết xâu $t$ có phải là xâu đối xứng hay không?

## Input

- Dòng đầu tiên gồm số nguyên $T$ - số bộ dữ liệu vào.
- Trên $T$ nhóm dòng tiếp theo, mỗi nhóm dòng mô tả một bộ dữ liệu vào gồm hai dòng:
    - Dòng đầu tiên gồm xâu $s$ như đề bài đã cho.
    - Dòng thứ hai gồm số nguyên dương $k$.

## Constraints

- $1 \le T \le 20$.
- $1 \le |s| \le 5000$.
- $1 \le k \le 10^{18}$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le k \le 5$.
- Subtask $2$ ($60\%$ số điểm): Không có điều kiện gì thêm.

## Output

- Với mỗi bộ dữ liệu vào, nếu xâu $t$ thu được là xâu đối xứng thì in ra `YES`. Ngược lại, in ra `NO`.

## Sample Input 1

```
3
aba
3
ccdd
2
freecontest
1
```

## Sample Output 1

```
YES
NO
NO
```

## Explanation 1

Với bộ dữ liệu vào thứ nhất, ta có $t =$ `abaabaaba` là một xâu đối xứng.

Với bộ dữ liệu vào thứ hai, ta có $t =$ `ccddccdd` không phải là một xâu đối xứng.

Với bộ dữ liệu vào thứ ba, ta có $t =$ `freecontest` không phải là một xâu đối xứng.