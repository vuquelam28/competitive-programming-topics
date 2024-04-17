# Palindk - Editorial

### Subtask 1

Ta sẽ tìm xâu $t \ (1 \le |t| \le 10^6)$ và kiểm tra $t$ có phải là xâu đối xứng hay không.

***Độ phức tạp:*** $O\big(|t|\big)$.

### Subtask 2

Lưu ý, ở subtask này $k \le 10^{18}$ nên độ dài xâu $t$ là quá lớn.

Gọi $n$ là độ dài của xâu $s$.

Ta có: $t=s_0s_1s_2...s_{n-1}s_0s_1s_2...s_{n-1}s_0s_1s_2...s_{n-1}...s_0s_1s_2...s_{n-1}$

Để $t$ đối xứng thì $s_0=s_{n-1}, s_1=s_{n-2}, ...s_{n-2}=s_2, s_{n-1}=s_1, s_0=s_{n-1}, ...$

Từ đó ta thấy để $t$ đối xứng thì $s$ cũng phải đối xứng, đây là điều kiện tương đương.

Code để check xâu đối xứng ta đã bàn ở subtask 1.

***Độ phức tạp:*** $O\big(|t|\big)$.