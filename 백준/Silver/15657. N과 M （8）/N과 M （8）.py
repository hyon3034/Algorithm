m, n = map(int, input().split())
arr = [0 for i in range(n)]
visited = [False for i in range(m+1)]
query = list(map(int,input().split()))
query.sort()

def recur(depth, start):
    if depth == n:
        for j in arr:
            print(query[j], end=' ')
        print()
        return

    for i in range(start, m):
        arr[depth] = i
        recur(depth + 1, i)

recur(0, 0)