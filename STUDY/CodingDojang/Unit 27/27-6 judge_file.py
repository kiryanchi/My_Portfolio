# 27.6 심사문제: 특정 문자가 들어있는 단서 찾기
# 27-6 judge_file.py
# 문자열이 저장된 words.txt 파일이 주어집니다(문자열은 한 줄로 저장되어 있습니다)
# words.txt 파일에서 문자 c가 포함된 단어를 각 줄에 출력하는 프로그램을 만드세요.
# 단어를 출력할 때는 등장한 순서대로 출력해야 하며
# ,(콤마)와 .(점)은 출력하지 않아야 합니다.

# words.txt
# Fortunately, however, for the reputation of Asteroid B-612, a Turkish dictator made a law that his subjects, under pain of death, should change to European costume. So in 1920 the astronomer gave his demonstration all over again, dressed with impressive style and elegance. And this time everybody accepted his report.

word_set = []
with open('words.txt', 'r') as file:
    words = file.readline().split()
    for i in words:
        if 'c' in i.strip(' ,.'):
            word_set.append(i.strip(' ,.'))

    for i in word_set:
        print('%s' % i )
