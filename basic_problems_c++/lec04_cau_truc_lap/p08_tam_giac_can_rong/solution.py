h = int(input())
for i in range(1, h + 1):
    if i == 1 or i == h:
        print(" " * (h - i) + "*" * (i * 2 - 1))
    else:
        print(" " * (h - i) + "*" + " " * (i * 2 - 3) + "*")
