# Date

Khai báo ra một ```struct``` để lưu trữ ngày tháng năm.

***Yêu cầu:*** Trong ```struct``` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm in ra ngày tháng năm hiện tại, theo format sau:
    - Hiện tại là ngày $2$ tháng $8$ năm $2023$, hãy in ra: `02/08/2023`. 
    - Hiện tại là ngày $12$ tháng $10$ năm $58$, hãy in ra: `12/10/0058`.


## Input

- Dòng duy nhất gồm ba số nguyên dương $a,b,c$ lần lượt biểu thị cho ngày, tháng và năm. 

## Constraints

- $1 \le a \le 28$.
- $1 \le b \le 12$.
- $1 \le c \le 3000$.

## Output

- Hãy in ra ngày tháng năm theo format yêu cầu.

## Sample Input 1

```
2 8 2023
```

## Sample Output 1

```
02/08/2023
```