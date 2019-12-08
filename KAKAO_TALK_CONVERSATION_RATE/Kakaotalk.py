# 카카오톡 대화 분석 프로그램
# 제작 : 박기현
# 용도 : 사람의 이름을 입력하면, 대화방에서 채팅을 입력한 횟수와 퍼센테이지를 알려줌

# 변수선언
total_of_talk = 0
name = ''
num_of_talk = 0
percentage = 0.0
file_name = ''

print("파일 이름을 입력해주세요.", end=' ')
file_name = input()

while True:
    file = open(file_name, encoding='UTF8')
    
    total_of_talk = 0
    num_of_talk = 0
    percentage = 0.0
    
    name = input("분석할 사람의 이름을 입력하세요. (stop 입력할 시 종료)")
    
    if name == "stop":
        break

    name = '[' + name + ']'
    
    for line in file:
        total_of_talk += 1
        
        if name in line:
            num_of_talk += 1
    
    percentage = (num_of_talk / total_of_talk) * 100

    print('\t%s가 말한 카톡 개수는 총 [%d]개 중 [%d]개로 [%.0f%%]입니다.\n' % (name, total_of_talk, num_of_talk, percentage))
    
    file.close()
