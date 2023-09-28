n = int(input())
nums = list(map(int, input().split()))

c = 0

while all(num % 2 == 0 for num in nums):
    nums = [num // 2 for num in nums]
    c += 1

print(c)
