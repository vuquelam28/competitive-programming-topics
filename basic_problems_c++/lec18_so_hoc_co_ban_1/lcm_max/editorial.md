# Bội Số Chung Nhỏ Nhất - Editorial

Đặt $\text{max\_lcm}$: Giá trị $LCM(x, a)$ lớn nhất.

Ta duyệt giảm dần các giá trị $x$ từ $b$ về, khi đó $LCM(x, a) = x \times a / GCD(x, a)$. Tới khi $GCD(x, a) = 1$ thì chắc chắn $LCM(x, a)$ đã đạt cực đại, lúc đó không cần xét tiếp nữa mà break luôn.

Cách làm này sẽ đảm bảo chương trình chạy khá nhanh do để di chuyển tới số nguyên tố cùng nhau với $a$ thì cùng lắm chỉ cần là một số nguyên tố là được. Mà trong đoạn $[1, 3 \times 10^9]$ thì mật độ các số nguyên tố khá dày, nên sẽ chạm tới số nguyên tố rất nhanh. 

***Độ phức tạp:*** $O(m)$ với $m$ là số bước lặp để tới được một số nguyên tố cùng nhau với $a$.

