n = int(input())
nums = list(map(int, input().split()))

count = {}
for x in nums:
    count[x] = count.get(x, 0) + 1

c = 0

for x in nums:
    if count[x] > x or x > count[x]:
        c += 1
        count[x] -= 1

print(c)
