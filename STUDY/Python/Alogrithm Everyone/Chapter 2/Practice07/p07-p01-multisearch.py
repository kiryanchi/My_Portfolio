# 연습문제 1
# 리스트에 여러개의 값이 있으면 모든 위치를 리스트로 반환.

def search_list(a, x):
    index = []
    for i in range(0, len(a)):
        if x == a[i]:
            index.append(i)
    
    return index

v = [19, 19, 19, 21, 23, 25]
print(search_list(v, 19))

# 계산 복잡도 : O(n)