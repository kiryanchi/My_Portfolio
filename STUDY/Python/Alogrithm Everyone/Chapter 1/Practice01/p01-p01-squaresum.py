# 1 부터 n 까지 제곱수의 합을 구하는 프로그램

# 1-1 O(n)
def sum_square_for(n):
    sum = 0
    for i in range(1, n+1):
        sum += i ** 2
    return sum

# 1-3 O(1)
def sum_sqaure(n):
    sum = n * (n + 1) * (2*n + 1) // 6
    return sum

print(sum_sqaure(5))
print(sum_square_for(5))
# 출력
# 55
# 55