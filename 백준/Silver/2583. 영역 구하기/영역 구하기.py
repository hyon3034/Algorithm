from collections import deque

v = []
visited = []
ans = []

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

w = 0
h = 0

cnt = 0
ext = 0


def BFS(n, m):
    global ext

    ext = 0

    que = deque()
    que.append((n, m))
    visited[n][m] = True

    ext += 1

    while len(que) > 0:
        cur = que.popleft()

        for i in range(4):
            nx = cur[0] + dx[i]
            ny = cur[1] + dy[i]

            if nx < 0 or nx >= h or ny < 0 or ny >= w:
                continue

            if visited[nx][ny] or not v[nx][ny]:
                continue

            ext += 1
            que.append((nx, ny))
            visited[nx][ny] = True


h, w, k = map(int, input().split())
v = [[1 for _ in range(101)] for _ in range(101)]
visited = [[False for _ in range(101)] for _ in range(101)]

for i in range(k):
    y0, x0, y1, x1 = map(int, input().split())

    for x in range(x0, x1):
        for y in range(y0, y1):
            v[x][y] = 0

for i in range(h):
    for j in range(w):
        if not visited[i][j] and v[i][j]:
            cnt += 1
            BFS(i, j)
            ans.append(ext)

print(cnt)
ans.sort()
print(*ans)
