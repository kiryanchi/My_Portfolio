# 최댓값 인덱스 구하기
# 입력 : 숫자 n개가 들어있는 리스트
# 출력 : 숫자 n개 중 최댓값의 인덱스

def find_max_index(a):
    n = len(a)
    max_idx = 0
    for i in range(1, n):
        if a[i] > a[max_idx]:
            max_idx = i
    return max_idx

v = [17, 92, 18, 33, 58, 7, 33, 42]
print(find_max_index(v))

# 출력
# 1