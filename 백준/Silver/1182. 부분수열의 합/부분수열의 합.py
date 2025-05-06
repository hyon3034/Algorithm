N, M = map(int, input().split())
query = list(map(int, input().split()))

arr = [0 for i in range(N)]
ans = 0


def recur(depth):
    global ans

    if depth == N:
        SUM = 0

        for j in range(0, N):
            if arr[j]:
                SUM += query[j]

        if SUM == M:
            ans += 1

        return

    for i in range(0, 2):
        arr[depth] = i
        recur(depth+1)


recur(0)

if M == 0:
    ans -= 1
print(ans)
