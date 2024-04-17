# So Sánh Số Ước - Editorial

Với subtask $1$ ta có thể dùng thuật đếm số ước có độ phức tạp là $O(n)$.

Với subtask $2$ ta phải dùng tới thuật đếm số ước có độ phức tạp là $O(\sqrt{n})$.

Với subtask cuối, ta dùng các nhận xét sau:

Nếu $N$ lẻ, $N$ sẽ không có ước chẵn, khi đó đáp án là `Odd`.
Nếu $N$ chẵn đặt $N=2^d \times a$ với $a$ lẻ và $d$ lớn nhất có thể. Thì khi đó các ước lẻ của $N$ là các ước của $a,$ còn các ước chẵn của $N$ chính là các ước của $a$ nhân với $2^i$ với $1 \le i \le d$.

Khi đó, dễ thấy số ước chẵn của $N$ sẽ là $\text{Even} = \text{Odd} \times d$.

Vậy nếu $d = 1$ thì đáp án là `Same`, $d > 1$ thì đáp án là `Even`.