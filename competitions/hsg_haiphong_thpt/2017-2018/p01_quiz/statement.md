# Chấm Trắc Nghiệm

Trong kỳ khảo sát chất lượng đầu năm, nhà trường tổ chức khảo sát một số môn dưới hình thức trắc nghiệm $100\%$. Sau khi kỳ khảo sát kết thúc giám khảo tiến hành dùng máy scanner để quét, sau đó nhận dạng toàn bộ bài của các môn trắc nghiệm. Sau khi công việc hoàn thành thì thu được các tệp văn bản chứa bài khảo sát của các thí sinh. Bài khảo sát của một thí sinh là một xâu ký tự có độ dài $n,$ ký tự thứ $i$ là câu trả lời cho câu hỏi thứ $i \ (i=1...n)$ có dạng:
- $1$ chữ cái $\in \{A,B,C,D\}$;
- `-` với câu thí sinh không tô;
- `*` với câu mà thí sinh tô trùng (một câu tô nhiều đáp án). 

Đáp án của đề khảo sát cũng là một xâu ký tự độ dài $n,$ ký tự thứ $i$ $\in \{$A,B,C,D\}$ là đáp án cho câu hỏi thứ $i$ $(i=1..n)$.


***Yêu cầu***: Bạn hãy viết chương trình tính số câu đúng cho một thí sinh bất kỳ?

## Input

- Dòng thứ nhất chứa xâu trả lời của thí sinh.
- Dòng thứ hai chứa xâu đáp án của đề thi tương ứng có cùng độ dài với xâu trả lời.

## Constraints

- Độ dài các xâu không vượt quá $100$.

## Output

- Một số nguyên duy nhất là số câu trả lời đúng của thí sinh.

## Sample Input 1

```
ABCD--*DCB
ABCDBADDDB
```

## Sample Output 1

```
6
```

## Explanation 1

Các câu không đúng: 
- Câu $5, 6$: Không tô.
- Câu $7$: Tô trùng.
- Câu $9$: Trả lời sai.