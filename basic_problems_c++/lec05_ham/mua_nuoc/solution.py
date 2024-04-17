def main() -> None:
    t = int(input())
    for i in range(t):
        n, a, b = map(int, input().split())
        if 2 * a <= b:
            print(n * a)
        else:
            print(n // 2 * b + (n % 2) * a)


if __name__ == "__main__":
    main()
