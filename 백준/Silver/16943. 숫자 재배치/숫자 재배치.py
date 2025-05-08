n, m = map(int, input().split())
L = len(str(n))

arr = [0 for i in range(L)]
visited = [False for i in range(10)]

digit_list = []
ans = []

temp = n

while temp != 0:
    digit_list.append(temp % 10)
    temp //= 10

def recur(depth):
    if depth == L:
        if digit_list[arr[0]] == 0:
            return

        num = ''.join(str(digit_list[i]) for i in arr)
        ans.append(int(num))
        return

    for i in range(L):
        if visited[i]:
            continue

        arr[depth] = i
        visited[i] = True
        recur(depth+1)
        visited[i] = False


recur(0)

ans = list(set(ans))
ans.sort()

for i in reversed(ans):
    if i < m:
        print(i)
        exit()

print(-1)
