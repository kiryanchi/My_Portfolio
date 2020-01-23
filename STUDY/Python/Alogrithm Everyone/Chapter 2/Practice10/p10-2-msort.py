# 병합 정렬
# 입력: 리스트 a
# 출력: 없음

def merge_sort(a):
    n = len(a)
    # 종료 조건 : 정렬할 리스트의 자료 개수가 한 개 이하이면 정렬할 피룡가 업승ㅁ.
    if n <= 1:
        return
    # 그룹을 나누어 각각 병합 정렬을 호출하는 과정
    mid = n // 2
    g1 = a[:mid]
    g2 = a[mid:]
    merge_sort(g1)
    merge_sort(g2)
    # 두 그룹을 하나로 병합
    i1 = 0
    i2 = 0
    ia = 0

    while i1 < len(g1) and i2 < len(g2):
        