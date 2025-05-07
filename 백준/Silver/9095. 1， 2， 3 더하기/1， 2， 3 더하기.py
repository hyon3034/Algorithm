arr = []
ans = []
n = 0


def check(cur):
    SUM = 0

    for i in range(0, cur):
        SUM += arr[i]

    if SUM < n:
        return True
    elif SUM == n:
        result = '+'.join(str(arr[i]) for i in range(0, cur))
        ans.append(result)
        return False
    elif SUM > n:
        return False


def recur(depth):
    if not check(depth):
        return

    if depth == n:
        return

    for i in range(1, 4):
        arr[depth] = i
        recur(depth+1)


m = int(input())

for i in range(m):
    n = int(input())
    arr = [0 for i in range(n)]
    ans = []
    recur(0)
    print(len(ans))
