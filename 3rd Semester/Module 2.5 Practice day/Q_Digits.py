t = int(input())

while t:
    s = ""
    num = input()
    num = [n for n in num]
    for i in num[::-1]:
        s += f"{i} "
    print(s)
    t -= 1
