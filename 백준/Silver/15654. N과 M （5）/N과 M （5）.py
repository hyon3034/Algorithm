m, n = map(int, input().split())
arr = [0 for i in range(n)]
visited = [False for i in range(m+1)]
query = list(map(int,input().split()))
query.sort()

def recur(depth):
    if depth == n:
        for j in arr:
            print(query[j], end=' ')
            
        print()
        return

    for i in range(0, m):
        if visited[i] :
            continue
        
        arr[depth] = i
        visited[i] = True
        recur(depth + 1)
        visited[i] = False

recur(0)