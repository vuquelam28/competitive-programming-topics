# Tìm Số Lớn Nhất - Editorial

Chỉ cần kiểm tra thử ba trường hợp:

- Nếu $a > b$ và $a > c$ thì $a$ là số lớn nhất.
- Nếu không, thì nếu $b > a$ và $b > c$ thì $b$ là số lớn nhất.
- Nếu không nữa thì chắc chắn $c$ là số lớn nhất, hoặc chí ít ba số cùng bằng nhau, khi đó kết quả vẫn là $c$. 