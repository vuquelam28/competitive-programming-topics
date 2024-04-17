# Di Chuyển - Editorial

Sort lại các điểm tăng dần theo tọa độ, dùng một stack lưu các điểm đang di chuyển về bên phải. Xét tuần tự các điểm, nếu điểm đó đang di chuyển sang phải thì đưa tọa độ vào stack, ngược lại thì xem xét tọa độ của điểm hiện tại (đang di chuyển sang trái) và điểm ở top của stack. Nếu khoảng cách của chúng nhỏ hơn hoặc bằng $2T,$ tức là tại thời điểm $T$ thì hai điểm này sẽ va chạm vào nhau và biến mất, khi đó xóa cả hai điểm đi.

Kết quả cuối cùng là (số điểm đang đi sang trái còn lại) + (số điểm đang đi sang phải) (kích thước stack).