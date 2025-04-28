# A, B
# (a,b) (a+A,b) (a,b+B) (a+A, b+B)

N = int(input())
A, B = map(int, input().split())

arr = []

for i in range(N):
    x, y = map(int, input().split())
    arr.append((x, y))

arr.sort()


def bs(x, y):
    temp = (x, y)

    s = 0
    e = N-1

    while (s <= e):
        mid = (s+e)//2

        if arr[mid] < temp:
            s = mid + 1
        elif arr[mid] > temp:
            e = mid - 1
        elif arr[mid] == temp:
            return True

    return False


# (a,b) (a+A,b) (a,b+B) (a+A, b+B)
cnt = 0

for leftdown in arr:
    if bs(leftdown[0]+A, leftdown[1]) and \
            bs(leftdown[0], leftdown[1]+B) and \
            bs(leftdown[0]+A, leftdown[1]+B):
        cnt += 1

print(cnt)
