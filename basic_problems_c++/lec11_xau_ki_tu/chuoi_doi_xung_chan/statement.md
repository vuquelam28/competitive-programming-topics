# Chuỗi Đối Xứng Chẵn

Một xâu kí tự được gọi là đối xứng nếu như đọc xâu đó từ trái qua phải hay từ phải qua trái đều như nhau. Ví dụ: `aba`, `xyyx`, `zz` là các xâu đối xứng. Đề bài cho trước một xâu kí tự $S$ có độ dài $N,$ chỉ bao gồm các chữ cái latin in thường.

***Yêu cầu:*** Hãy xác định xem trong xâu $S$ có tồn tại một xâu con liên tiếp có độ dài chẵn và là xâu đối xứng hay không?


## Input

- Dòng đầu là số tự nhiên $T$ – số lượng testcases.
- $T$ dòng tiếp theo, dòng thứ $i$ chứa một xâu kí tự $S$ tương ứng với testcase thứ $i$.


## Constraints

- $T≤5$.
- $1≤|S|≤10^5,$ với $|S|$ là độ dài của xâu $S$.
- Subtask $1$ ($50\%$ số điểm): $|S|≤100$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.


## Output

- Với mỗi testcase, nếu tồn tại một xâu con liên tiếp của $S$ có độ dài chẵn và là xâu đối xứng thì in ra `YES`, ngược lại in ra `NO`.


## Sample input 1

```
2
abdccdac
notapalindrome
```

## Sample output 1

```
YES
NO
```

