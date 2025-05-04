n = int(input())
query = input().split()
arr = [0 for i in range(n+1)]
visited = [False for i in range(10)] # 숫자 중복 체크
ans = []

# 자리수를 지정하기 때문에 백트래킹 사용
# -> 재귀함수 사용해야함

def check(cur):
    # 하나 채운 거 판단하기는 이름
    if cur <= 1:
        return True
        
    # ex) > < <
    # 3번째 < 시점에서 arr이 잘 채워졌는지 중간에 체크하는 것
    if query[cur - 2] == '<' and arr[cur - 2] > arr[cur - 1]:
        return False
    if query[cur - 2] == '>' and arr[cur - 2] < arr[cur - 1]:
        return False
        
    return True
        
def recur(depth):
    # 가지치기
    if not check(depth):
        return
    
    # 기저 조건
    if depth == n + 1: # 자리수는 하나 더 많아야 함
        ans.append(arr[:])
        return
    
    # 재귀 호출
    for i in range(10): # 각 자리는 0부터 9까지 올수 있기 때문에
        if visited[i]:
            continue
        
        visited[i] = True
        arr[depth] = i
        recur(depth + 1)
        visited[i] = False
        
recur(0)
print(''.join(map(str, ans[-1])))
print(''.join(map(str, ans[0])))