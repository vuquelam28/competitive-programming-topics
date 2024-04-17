# Mario Ăn Nấm 2 - Editorial

Không giống với Mario ăn nấm bản $1,$ do $n$ và $m$ ở đây khá lớn nên nếu bạn tìm tất cả đường đi thì sẽ không vượt qua được tất cả các test.

Dễ dàng nhận thấy, ở ô $(i, j)$ ta luôn có thể đi đến ô $(x, y)$ với $i \le x, j \le y$.

Bạn hãy để ý ràng buộc chỉ có không quá $25$ ô chứa nấm và các số điểm **lớn hơn 0.**

Bạn sẽ tạo một tập nghiệm gồm các ô **có nấm** mà Mario đã đi qua, sau đó với ô đang xét kiểm tra xem có thể đi đến được ô trước đó hay không.
