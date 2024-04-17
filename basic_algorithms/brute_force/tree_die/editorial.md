# Biên Giới Cây - Editorial

Ta lưu lại hai thông số: Số lá trên cây và vị trí của cây đó (sử dụng mảng ở kiểu `pair` trong C++ hoặc `tuple` trong Python). Sắp xếp lại mảng tăng dần theo số lá, nếu số lá bằng nhau thì tăng dần theo vị trí.

Dùng mảng $\text{is\_die[i]}$: Kiểm tra cây ở vị trí $i$ đã chết hay chưa.

Tuần tự duyệt các cây, nếu cây nào chưa chết thì phun thuốc để cây đó và hai cây liền trước sau nó chết, đồng thời tăng số ngày lên $1$. Duyệt hết các cây chúng ta thu được số ngày để các cây chết hết.