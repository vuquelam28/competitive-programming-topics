def first_digit(n):
    if(n < 10): return n 
    return first_digit(n // 10)

n = int(input())
print(first_digit(n))