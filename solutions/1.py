def solve(input):
    print(len(input))
    a = []
    b = []
    for line in input:
        c = line.strip().split('  ')
        a.append(int(c[0]))
        b.append(int(c[1]))
    a.sort()
    b.sort()
    s=0
    for i in range(len(a)):
        s+= abs(b[i] - a[i])

    return s
