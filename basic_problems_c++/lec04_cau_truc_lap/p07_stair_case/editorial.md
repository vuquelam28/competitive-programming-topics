# Cầu Thang - Editorial

In ra cầu thang theo quy tắc sau: Dòng thứ $i$ sẽ chứa bậc thang thứ $n - i + 1,$ bao gồm $n - i$ khoảng trắng và $i$ kí tự `#` ở cuối.

Sử dụng một vòng lặp với $i = 1...n,$ và kết hợp thêm một vòng lặp $j$ bên trong, ta sẽ thu được giải thuật $O(n^2)$.