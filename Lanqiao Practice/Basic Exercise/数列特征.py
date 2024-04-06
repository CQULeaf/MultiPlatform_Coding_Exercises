n = int(input())
numbers = list(map(int, input().split()))

numbers_max = max(numbers)
numbers_min = min(numbers)
numbers_sum = sum(numbers)

print(numbers_max)
print(numbers_min)
print(numbers_sum)