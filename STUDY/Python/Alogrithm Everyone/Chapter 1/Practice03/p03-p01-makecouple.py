# n명 중 두 명을 뽑아 짝을 짓는 프로그램
# 입력: n 명이 들어있는 리스트
# 출력: 짝이 되는 조합

def print_couple(a):
    for i in range(len(a)-1):
        for j in range(i+1, len(a)):
            print(a[i], ' - ', a[j])

name = ['Tom', 'Jerry', 'Mike']
print_couple(name)
