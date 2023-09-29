n = int(input())
nums = list(map(int, input().split()))


def is_valid(itr):
    for i in itr:
        if i % 2 != 0:
            return False
    return True


c = 0

while is_valid(nums):
    nums = [num // 2 for num in nums]
    c += 1

print(c)
