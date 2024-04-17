# GCD Của Dãy - Editorial

Phân tách bài toán thành hai trường hợp sau:

- Nếu $M = N,$ kết quả là $M$.
- Nếu $M \ne N,$ kết quả là: 

    $$X = \text{GCD}(M, M + 1, M + 2,..., N)$$ 
    
    $$= \text{GCD}\big(\text{GCD}(M, M + 1), M + 2, M + 3,..., N\big)$$ 
    
    $$= \text{GCD}(1, M + 2, M + 3,..., N) = 1$$

***Độ phức tạp:*** $O(1)$.
