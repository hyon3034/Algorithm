n, m = map(int, input().split())

arr = []

for i in range(n):
    k = int(input())

    arr.append(k)

maxML = max(arr)


def bs():
    s = 1
    e = maxML

    while (s <= e):
        mid = (s + e) // 2

        count = 0

        for num in arr:
            count += (num // mid)

        if count >= m:
            s = mid + 1
        else:
            e = mid - 1

    print(e)


bs()
