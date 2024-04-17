db = {}
n = int(input())
answer = 0
numbers = list(map(int, input().split(' ')[:n]))
digits = []
for number in numbers:
    if number not in db:
        digits.append(number)
        db[number] = 1
    else:
        db[number] = db[number] + 1
for digit in digits:
    if db[digit] < digit:
        answer = answer + db[digit]
    elif db[digit] > digit:
        answer = answer + (db[digit] - digit)
print(answer)