# Cọc Rào - Editorial

Đầu tiên, ta sẽ đi tìm các vị trí của những chiếc cọc bị sai quy tắc trong dãy cọc ban đầu. Chiếc cọc thứ $i$ bị coi là sai quy tắc nếu như:

- Vị trí $i$ lẻ nhưng $c_i \ge c_{i + 1}$.
- Vị trí $i$ chẵn nhưng $c_i \le c_{i + 1}$.

Sử dụng một vòng lặp `while` để tìm ra tất cả những vị trí bị sai quy tắc. Gọi $x$ là số lượng vị trí bị sai quy tắc, thì ta chia $x$ ra làm các trường hợp:

- $x > 6$.
- $3 < x \le 6$.
- $x = 3$ hoặc $x = 2$.

Lí do vì sao $x$ không thể bằng $1?$ Bởi vì nếu như vị trí $i$ bị sai quy tắc thì hiển nhiên vị trí $i + 1$ cũng sẽ sai quy tắc. Nhưng nếu $i, i + 1$ và $i + 2$ cùng sai quy tắc thì sẽ tính là $3$ vị trí bị sai quy tắc. Từ đó suy ra, không thể có trường hợp $x = 1$.

Bây giờ, cùng xem xét lí do vì sao lại chia ra các trường hợp như vậy:

- Nếu như $x > 6$: Khi hoán đổi hai vị trí cho nhau, thì sẽ có tối đa $6$ vị trí bị tác động thay đổi so sánh lớn hơn - nhỏ hơn với các phần tử xung quanh. Vì thế, nếu như $x > 6$ thì chắc chắn không có cách nào để biến dãy cọc ban đầu trở thành hoàn hảo.
- Nếu như $3 < x \le 6$: Khi hoán đổi một vị trí đúng và một vị trí sai cho nhau, thì chỉ có tối đa là $3$ vị trí có thể bị tác động thành đúng, còn nếu như tệ hơn, thì có thể số vị trí bị sai sẽ tăng lên (vị trí đúng biến thành sai). Do đó, trường hợp này ta buộc phải lựa chọn hai vị trí bị sai quy tắc để hoán đổi cho nhau. Do số lượng vị trí sai chỉ là $3, 4$ hoặc $5$ nên ta có thể thử chọn từng cặp vị trí để hoán đổi và kiểm tra xem phương án đó có hợp lệ hay không.
- Nếu như $x = 2$ hoặc $x = 3$: Một vị trí sai có thể thử hoán đổi với tất cả các vị trí khác trong dãy, bởi vì thao tác này có thể tác động tới ba vị trí. Ta sẽ thử tất cả các cách hoán đổi rồi kiểm tra lại dãy số có hoàn hảo hay không (lưu ý không cần phải duyệt lại cả dãy số để kiểm tra, mà chỉ cần kiểm tra những vị trí bị tác động để tránh làm mất thời gian).

Như vậy, ta thu được giải thuật $O(m)$.