# Căn phòng hình chữ nhật - Editorial

Vì giới hạn $H$ và $W$ khá nhỏ, nên ta sẽ thực hiện quay lui, thử hết tất cả trường hợp đặt $A$ cục $2\times 1$ và $B$ cục $1\times 1$ vào bảng trên. Nếu đặt được cách nào thì cộng đáp án cách đó.

Ta sẽ quay lui, đầu tiên ở ô $(1,1)$ sau đó thử đặt miếng $2\times 1$ dọc hoặc ngang hoặc đặt miếng $1\times 1$, đánh dấu những ô đã bị đặt và đi tới ô tiếp theo $(1,2), (1,3), \dots$ Ô nào đã đánh dấu rồi thì đi tiếp.

Mỗi khi đến cuối hàng hiện tại, thì đi qua ô đầu tiên của hàng tiếp theo. Cho tới cuối nên đặt được đúng $A$ cục $2\times 1$ và $B$ cục $1\times 1$ thì cộng đáp án lên $1$.

Độ phức tạp: Thấp hơn rất nhiều so với $O(HW\times 2^A\times C_{HW}^A)$.
