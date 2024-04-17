n = int(input())
array = []
for _ in range(n):
    array.append(int(input()))
result = 0
for i in range(n - 1):
    result = max(result, array[i] * array[i + 1])
print(result)
