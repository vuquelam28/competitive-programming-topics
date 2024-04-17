# Chơi Bóng Rổ - Editorial

Giải thuật của bài này là tham lam. Đầu tiên, ta nhận xét rằng, giá trị $D$ nên là một trong các số $a_i$ hoặc $b_i$. Đưa toàn bộ các giá trị $a_i, b_i$ vào một `vector` hoặc mảng và sắp xếp lại tăng dần.

Ban đầu, coi toàn bộ các cú ném đều là ba điểm (nghĩa là $D$ bằng giá trị nhỏ nhất trong các khoảng cách trừ đi $1$). Lần lượt đặt $D$ bằng các khoảng cách, mỗi lần như vậy, dựa vào khoảng cách ghi điểm đó là của đội nào mà ta sẽ trừ bớt điểm của đội đó đi $1$. Mỗi lần chọn $D$ thì cập nhật lại chênh lệch điểm của hai đội và lấy giá trị chênh lệch lớn nhất có thể. Cách làm này cũng đảm bảo được điểm của đội A luôn luôn là lớn nhất, vì chỉ lần lượt trừ đi $1$ điểm và nếu chênh lệch mới tốt hơn hẳn chênh lệch cũ thì mới cập nhật kết quả.

Lưu ý conner case: Nếu như D = một giá trị xuất hiện trong cả mảng A lẫn mảng B thì phải trừ điểm ở cả 2 bên.

***Độ phức tạp:*** $O(n \times \log n)$.