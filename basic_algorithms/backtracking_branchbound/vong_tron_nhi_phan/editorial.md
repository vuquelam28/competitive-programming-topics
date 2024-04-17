# Vòng tròn nhị phân - Editorial

Ở đây nếu như bạn đọc quay lui sinh tất cả hoán vị và kiểm tra thì sẽ không vượt qua các test có $n$ lớn (vì cần thời gian $O((2^n)!)$ để sinh hoán vị).

Ta sẽ cải tiến cách làm như sau: ở mỗi nghiệm thay vì duyệt tất cả các giá trị từ $0$ đến $2^n - 1$ để tìm nghiệm thì ta chỉ cần duyệt các nghiệm khác nghiệm trước đó đúng $1$ bit bằng cách đảo trạng thái của $1$ bit ở mỗi vị trí của nghiệm trước đó (tức nếu bit $0$ thì đảo thành $1$ và ngược lại), lúc này ta chỉ cần duyệt đúng $n$ nghiệm vì mỗi nghiệm có $n$ bit.