from collections import deque

v = []
visited = []

dx = [0, 1, 0, -1, 1, -1, -1, 1]
dy = [1, 0, -1, 0, 1, -1, 1, -1]

w = 0
h = 0


def BFS(n, m):
    que = deque()
    que.append((n, m))
    visited[n][m] = True

    while len(que) > 0:
        cur = que.popleft()

        for i in range(8):
            nx = cur[0] + dx[i]
            ny = cur[1] + dy[i]

            if nx < 0 or nx >= h or ny < 0 or ny >= w:
                continue

            if visited[nx][ny] or not v[nx][ny]:
                continue

            que.append((nx, ny))
            visited[nx][ny] = True


while True:
    w, h = map(int, input().split())
    v = [[0 for _ in range(51)] for _ in range(51)]
    visited = [[False for _ in range(51)] for _ in range(51)]

    if w == 0 and h == 0:
        break

    for i in range(h):
        row_input = list(map(int, input().split()))
        v[i][:len(row_input)] = row_input

    cnt = 0

    for i in range(h):
        for j in range(w):
            if not visited[i][j] and v[i][j]:
                cnt += 1
                BFS(i, j)

    print(cnt)
