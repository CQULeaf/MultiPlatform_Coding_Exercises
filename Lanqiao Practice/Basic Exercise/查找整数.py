n = int(input())
numbers = list(map(int, input().split()))
a = int(input())

position = -1

for i in range(n):
    if numbers[i] == a:
        position = i + 1
        break

print(position)