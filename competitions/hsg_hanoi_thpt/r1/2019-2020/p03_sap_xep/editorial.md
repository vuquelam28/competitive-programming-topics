# Sắp Xếp - Editorial

Đây là bài toán khá hay với cách giải đặc biệt và ngắn gọn.

Với một dãy số, ta có thể hiểu, mỗi vị trí bao gồm hai khả năng:
- Khả năng $1$: Nó bị đưa sang vị trí khác, mất thêm chi phí là $1$.
- Khả năng $2$: Nó giữ nguyên vị trí, không mất thêm chi phí nào.

Thay vì tìm các số ở dạng $1,$ tức là trong cách chuyển tối ưu sẽ được đưa sang vị trí khác, ta sẽ tìm số số ở dạng $2$ - không bị chuyển đi. Mà vì số lượng thao tác mong muốn là ít nhất, nên ta sẽ đi tìm số lượng tối đa các số có thể giữ nguyên vị trí.

Xét một dãy số ví dụ sau: $6 \ 2 \ 4 \ 3 \ 5 \ 1$. Ta có nhận xét:
- Những số không bị chuyển đi sẽ là: $(2, 4, 5)$ hoặc $(2, 3, 5)$
- Ta nhận ra rằng, đó chính là dãy con tăng dài nhất của dãy $A$. Điều này đúng, bởi những số không bị chuyển đi sẽ buộc phải có thứ tự tăng dần, nếu không sẽ không thể biến dãy thành dạng tăng dần mong muốn trong đề bài đã yêu cầu.

Vậy, kết quả của chúng ta sẽ là $n - LIS,$ với $LIS$ là độ dài dãy con tăng dài nhất trong dãy.

Thuật toán tìm dãy con tăng dài nhất đã khá phổ biến, để qua được với $n \le 10^5,$ ta cần dùng thuật toán tìm $LIS$ trong $O(n \times \log n)$ bằng tìm kiếm nhị phân (hoặc bằng Binary Indexed Tree hay Segment Tree, nhưng cách làm tìm kiếm nhị phân sẽ ngắn gọn hơn nhiều).

***Độ phức tạp:*** $O(n \times \log n)$.