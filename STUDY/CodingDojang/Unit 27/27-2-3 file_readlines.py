# 변수 = 파일객체.readlines()
# 파일의 내용을 한 줄씩 리스트 형태로 가져옴.
with open('hello.txt', 'r') as file:
    lines = file.readlines()
    print(lines)
