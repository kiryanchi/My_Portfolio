# 숫자 n 개중 최댓값 찾기 재귀 호출
# 입력: n
# 출력: 최댓값

def recursion_find_max(a, length):
    if length == 1:
        return array[0]
    else:
        return max(a[length-1], recursion_find_max(a, length - 1))

array = [33, 44, 5, 66, 138, 255, 49, 23]
print(recursion_find_max(array, len(array)))