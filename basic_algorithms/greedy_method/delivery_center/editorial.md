# Trung Tâm Vận Chuyển - Editorial

Với mỗi truy vấn, ta sẽ coi như bỏ đi các hộp từ $L$ đến $R$ và xử lí lại. 

Ta sẽ sort các hành lí theo thứ tự giảm dần của $V_i$. Sau đó, đi lần lượt các hành lí từ $V_i$ lớn nhất đến bé nhất, mỗi hành lí $(W,V)$, ta sẽ tìm chiếc hộp $j$ bé nhất nhưng vẫn chứa được hành lí đó $(X_j \ge W)$ và $j$ chưa được sử dụng ở những hành lí trước đó. Ta sẽ dùng hộp $j$ để đựng hành lí và cộng thêm đáp án một lượng $V$, đánh dấu hộp $j$ đã được sử dụng. Nếu không tìm được $j$ thì đi tới hành lí tiếp theo. Ta sẽ for trâu qua để kiếm $j$.

Cách tham lam trên đúng, tại vì mình đi theo giảm dần $V_i$ cho nên nếu tìm được hộp đặt hành lí vào được thì lấy liền (vì những hộp sau sẽ có $V_i$ thấp hơn) và tìm được hộp thì tìm hộp bé nhất mà vẫn chứa được sẽ là tốt nhất cho những hành lí sau.

***Độ phức tạp:*** $O(Q\times N \times M)$ (có thể cải tiến lên $O(Q\times (N+M) \times logM)$ sử dụng set/multiset).

