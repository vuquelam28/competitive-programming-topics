# Đảo Chẵn Lẻ

Cho trước mảng $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Trong mảng có thể có những số chẵn hoặc số lẻ. Nhiệm vụ của chúng ta là đảo ngược thứ tự của các số chẵn trong mảng, đảo ngược thứ tự của các số lẻ trong mảng, tuy nhiên vẫn giữ nguyên thứ tự ***tương đối*** của chúng trong mảng.

Lấy ví dụ, với mảng $A = [11, 22, 33, 44, 55, 66]$ thì các vị trí $1, 3, 5$ là các vị trí có số lẻ, còn các vị trí $2, 4, 6$ là các vị trí có số chẵn. Sau khi đảo lại thứ tự các phần tử chẵn lẻ trong mảng, nó sẽ trở thành $A = [55, 66, 33, 44, 11, 22]$. Ta thấy các vị trí $1, 3, 5$ vẫn có số lẻ, các vị trí $2, 4, 6$ vẫn có số chẵn, tuy nhiên thứ tự các phần tử bên trong các vị trí đó đã bị đảo ngược lại.

***Yêu cầu:*** Với mảng $A$ cho trước, hãy thực hiện công việc đảo lại các số chẵn - lẻ như mô tả bên trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- In ra mảng sau khi đảo vị trí trên một dòng, các phần tử phân tách nhau bởi dấu cách.

## Sample Input 1

```
6
11 22 33 44 55 66
```

## Sample Output 1

```
55 66 33 44 11 22
```

