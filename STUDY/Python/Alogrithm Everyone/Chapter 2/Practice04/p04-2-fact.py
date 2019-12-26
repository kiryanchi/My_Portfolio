# 연속한 숫자의 곱을 구하는 알고리즘
# 입력: n
# 출력: n!

def fact(n):
    if n <= 1:
        return 1            # 종료 조건
    return n * fact(n - 1)

print(fact(1))
print(fact(5))
print(fact(10))

# 출력
# 1
# 120
# 3628800