# 1 부터 n 까지의 합을 구하는 재귀 호출
# 입력: n
# 출력: 1 부터 n 까지의 합

def recursion_sum(n):
    sum = n
    if n == 1:
        return 1

    return sum + recursion_sum(n - 1)

print(recursion_sum(10))