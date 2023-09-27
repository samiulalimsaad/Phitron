t = int(input())

for _ in range(t):
    s = 0
    x, y = map(int, input().split())
    if x > y:
        x, y = y, x

    for n in range(x + 1, y):
        if n % 2 == 1:
            s += n

    print(s)
