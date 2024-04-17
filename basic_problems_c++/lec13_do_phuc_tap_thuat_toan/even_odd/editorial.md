# Chẵn Lẻ - Editorial

### Subtask 1

For qua tất cả các cặp $(i, j)$.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Xét với phần tử $a_i$. Nếu $a_i$ lẻ, nó sẽ chỉ kết hợp được với các phần tử chẵn. Từ đó, $a_i$ sẽ được cộng $\text{cnt\_even}$ lần, với $\text{cnt\_even}$ là số phần tử là chẵn của dãy $a$. Tương tự, nếu $a_i$ chẵn, nó sẽ được cộng $\text{cnt\_odd}$ lần với $\text{cnt\_odd}$ là số phần tử là lẻ của dãy $a$.

***Độ phức tạp:*** $O(n)$.