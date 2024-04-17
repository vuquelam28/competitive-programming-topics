# TAN - Editorial

Điều kiện để một số chia hết cho $3$ là tổng các chữ số của nó chia hết cho $3$, tương tự để một số chia hết cho $9$ thì tổng các chữ số của nó cần chia hết cho $9$.

Áp dụng điều này, đầu tiên ta tính tổng $n$ chữ số ban đầu, sau đó kiểm tra từng chữ số có thỏa mãn hay không bằng cách lấy tổng đó trừ đi chữ số đang xét, nếu nó chia hết cho $3$ nhưng không chia hết cho $9$ thì đó là một chữ số thỏa mãn.

***Độ phức tạp:*** $O(n)$.