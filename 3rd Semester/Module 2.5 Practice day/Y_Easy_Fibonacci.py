t = int(input())

fib = [0, 1]

for i in range(2, t):
    fib.append(fib[i - 1] + fib[i - 2])

for i in range(0, len(fib) - 1):
    print(fib[i], end=" ")
print(fib[-1])
