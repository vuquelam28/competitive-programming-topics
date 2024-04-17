# Bài Phép Thuật - Editorial

Có nhiều phương án để giải bài này (Tham lam, Quy hoạch động, Luồng mincost), nhưng ở đây sẽ giới thiệu phương án Tham lam cho dễ tiếp cận.

An chỉ có hai lựa chọn cho chiến thuật tấn công: Hoặc cố gắng tiêu diệt toàn bộ các quân bài của Bình, hoặc không tiêu diệt hết các quân bài của Bình.

Trước hết, hãy sắp xếp lại các quân bài theo thứ tự tăng dần về điểm tấn công (hoặc điểm phòng thủ). Coi các lá bài của An được chứa trong mảng $\text{mine}[],$ các lá bài ở thế tấn công của Bình chứa trong mảng $\text{atk\_cards}[],$ còn các lá bài ở tư thế phòng thủ chứa trong mảng $\text{def\_cards}[]$.

Nếu như An không tiêu diệt hết các quân bài của Bình, thì rõ ràng việc tấn công các quân bài ở vị trí phòng thủ là vô nghĩa. Vì thế, giả sử An thực hiện $k$ lượt tấn công, thì chiến lược sẽ là lấy $k$ quân bài có sức tấn công cao nhất của bản thân để tấn công $k$ quân bài có sức tấn công thấp nhất của đối thủ. Trường hợp này, dù sắp xếp tấn công theo cách nào, thì kết quả cũng vẫn là:

$$\text{max}\left(\sum_{i = m - k + 1}^m \text{mine}[i] - \sum_{i = 1}^k \text{atk\_cards}[i]\right); \forall k: 1 \le k \le \text{min}\big(m, \text{size(atk\_cards)}\big)$$

Nếu như An cố gắng tiêu diệt hết các quân bài của Bình, thì An cần làm hai việc sau:

- Trước tiên, cố gắng tiêu diệt toàn bộ các lá bài ở tư thế phòng thủ của Bình. Với mỗi lá bài có điểm phòng thủ là $\text{def\_cards}[i],$ cần tìm một lá bài $\text{mine}[j]$ có điểm tấn công nhỏ nhất và lớn hơn $\text{def\_cards}[i],$ dùng nó tấn công và đánh dấu lại đã sử dụng nó. Nếu như có thể giết hết toàn bộ bài phỏng thủ của Bình, thì sang bước tiếp theo, còn ngược lại thì tổng sát thương gây ra là $0$.
- Sử dụng các lá bài còn lại, cố gắng tiêu diệt các lá bài ở tư thế tấn công của Bình. Ý tưởng vẫn như cũ, lấy những lá bài có điểm tấn công cao nhất của bản thân để tấn công các lá còn lại của Bình. Nếu không thể tiêu diệt được hết bài tấn công của Bình thì kết quả sẽ là $0$ luôn, vì chắc chắn cách này sẽ không tốt hơn cách thứ nhất.
- Nếu như tiêu diệt được toàn bộ các lá bài tấn công của Bình, thì Bình sẽ nhận thêm sát thương trực tiếp nếu như An vẫn còn lại các lá bài tấn công chưa sử dụng.

Lấy kết quả lớn nhất trong hai chiến lược trên, ta thu được kết quả cuối cùng.

***Độ phức tạp:*** $O(m + n)$.