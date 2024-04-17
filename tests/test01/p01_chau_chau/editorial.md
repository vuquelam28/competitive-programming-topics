# Châu Chấu - Editorial

### Subtask 1

Bạn đọc chỉ cần thực hiện tuần tự $n$ bước nhảy theo đúng quy luật được nêu ở đề bài.

***Độ phức tạp:*** $O(n)$.

### Subtask 2

Bạn đọc sẽ viết ra dãy số và tìm quy luật, nếu $x_0$ lẻ thì:

- $x_0 = x_0$ (lẻ)
- $x_1 = x_0 + 1$ (chẵn)
- $x_2 = x_1 - 2 = x_0 - 1$ (chẵn)
- $x_3 = x_2 - 3 = x_0 - 4$ (lẻ)
- $x_4 = x_3 + 4 = x_0$ (lẻ)
- $x_5 = x_4 + 5 = x_0 + 5$ (chẵn)
- $x_6 = x_5 - 6 = x_0 - 1$ (chẵn)
- $x_7 = x_7 - 7 = x_0 - 8$ (lẻ)
- $x_8 = x_8 + 8 = x_0$ (lẻ)
- $x_9 = x_8 + 9 = x_0 + 9$ (chẵn)
- $x_{10} = x_{9} - 10 = x_0 - 1$ (chẵn)
- $x_{11} = x_{10} - 11 = x_0 - 12$ (lẻ)
- $x_{12} = x_{11} + 12 = x_0$ (lẻ)
- $\dots$

Vậy ta để ý rằng:

- Nếu $n \text{ mod } 4 = 0$ thì châu chấu sẽ đứng ở tọa độ $x_0$.
- Nếu $n \text{ mod } 4 = 1$ thì châu chấu sẽ đứng ở tọa độ $x_0 + n$.
- Nếu $n \text{ mod } 4 = 2$ thì châu chấu sẽ đứng ở tọa độ $x_0 - 1$.
- Nếu $n \text{ mod } 4 = 3$ thì châu chấu sẽ đứng ở tọa độ $x_0 - n - 1$.

Dựa theo ý tưởng bên trên, ta có thể nhận ra quy luật khi $x_0$ chẵn như sau:
- Nếu $n \text{ mod } 4 = 0$ thì châu chấu sẽ đứng ở tọa độ $x_0$.
- Nếu $n \text{ mod } 4 = 1$ thì châu chấu sẽ đứng ở tọa độ $x_0 - n$.
- Nếu $n \text{ mod } 4 = 2$ thì châu chấu sẽ đứng ở tọa độ $x_0 + 1$.
- Nếu $n \text{ mod } 4 = 3$ thì châu chấu sẽ đứng ở tọa độ $x_0 + n + 1$.

***Độ phức tạp:*** $O(1)$.