N =  int(input())

arr = list(map(int,input().split()))
arr = list(set(arr))
arr.sort()

print(*arr)