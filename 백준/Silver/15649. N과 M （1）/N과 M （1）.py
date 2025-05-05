m,n = map(int,input().split())
arr = [0 for i in range(n)]
visited = [False for i in range(m+1)]

def recur(depth):
    if depth == n:
        print(*arr)
        return
    
    for i in range(1, m+1):
        if visited[i]:
            continue
        
        arr[depth] = i
        visited[i] = True
        recur(depth+1)
        visited[i] = False

recur(0)