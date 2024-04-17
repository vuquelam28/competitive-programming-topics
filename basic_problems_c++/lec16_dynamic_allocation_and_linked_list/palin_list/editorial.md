# Palin List - Editorial

Ta sẽ kiểm tra dần theo cặp đầu - cuối, nếu nó khác nhau thì đây không phải palindrome, ngược lại dịch con trỏ trái sang phải và con trỏ phải sang trái nếu chúng không bằng nhau hoặc giao nhau.

Danh sách liên kết ở đây sẽ cần cài đặt bổ sung thêm trường $last$ trỏ vào phần tử cuối, và mỗi node sẽ có thêm trường $prev$ trỏ vào phần tử liền trước nó.