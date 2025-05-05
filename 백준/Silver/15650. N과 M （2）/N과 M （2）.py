m, n = map(int, input().split())
arr = [0 for i in range(n)] 


def recur(depth, start):
    if depth == n:
        print(*arr)
        return
    
    for i in range(start, m+1):
        arr[depth] = i
        recur(depth +1, i + 1)
        
recur(0,1)