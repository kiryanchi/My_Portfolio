# 파일객체.writelines(문자열리스트)
lines = ['안녕하세요.\n', '파이썬\n', '코딩 도장입니다.\n']

with open('hello.txt', 'w') as file:
    file.writelines(lines)
