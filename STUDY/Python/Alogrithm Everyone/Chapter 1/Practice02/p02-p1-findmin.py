# 최솟값과 인덱스 구하기
# 입력 : 숫자 n개가 들어있는 리스트
# 출력 : 숫자 n개 중 최댓값과 인덱스

def find_min(a):
    n = len(a)
    min = a[0]
    index = 0
    for i in range(n):
        if a[i] < min:
            min = a[i]
            index = i
    return min, index

v = [17, 92, 18, 33, 58, 7, 33, 42]
print(find_min(v))