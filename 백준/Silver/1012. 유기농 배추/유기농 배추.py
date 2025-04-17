from collections import deque

n = int(input())

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

for i in range(n):
    a, b, c = map(int, input().split())

    v = [[0 for i in range(a)] for j in range(b)]
    visited = [[False for i in range(a)] for j in range(b)]

    for j in range(c):
        y, x = map(int, input().split())
        v[x][y] = 1

    sum = 0

    for i in range(b):
        for j in range(a):
            if visited[i][j] or v[i][j] == 0:
                continue

            sum += 1

            que = deque()
            que.append((i, j))
            visited[i][j] = True

            while len(que) > 0:
                curX = que[0][0]
                curY = que[0][1]
                que.popleft()

                for k in range(4):
                    nx = dx[k] + curX
                    ny = dy[k] + curY

                    if ny < 0 or ny >= a or nx < 0 or nx >= b:
                        continue

                    if visited[nx][ny] == True or v[nx][ny] == 0:
                        continue

                    que.append((nx, ny))
                    visited[nx][ny] = True

    print(sum)
