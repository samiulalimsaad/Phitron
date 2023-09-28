st = input()

cl = 0
cr = 0

strings = []

for ch in st:
    if ch == "L":
        cl += 1
    else:
        cr += 1

    if cl == cr:
        strings.append(st[: cl + cr])
        st = st[cl + cr :]
        cl = 0
        cr = 0

print(len(strings))

for string in strings:
    print(string)
