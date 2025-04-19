import sys

sys.setrecursionlimit(100000)

n = int(input())

v = [[] for _ in range(n+1)]
visited = [[] for _ in range(n+1)]
parent = [[] for _ in range(n+1)]


for i in range(n - 1):
    a, b = map(int, input().split())

    v[a].append(b)
    v[b].append(a)


def DFS(cur, prev):
    parent[cur] = prev
    visited[cur] = True

    for nxt in v[cur]:
        if visited[nxt]:
            continue

        DFS(nxt, cur)


DFS(1, 1)

for p in parent[2:]:
    print(p)
