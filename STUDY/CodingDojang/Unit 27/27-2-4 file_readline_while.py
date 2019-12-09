# 변수 = 파일객체.readline()
# 피일의 내용을 한 줄씩 순차적으로 읽음
with open('hello.txt', 'r') as file:
    line = None
    while line != '':
        line = file.readline()
        print(line.strip('\n'))
# 주의할 점
# while 반복문을 사용해야함
# readline 은 더 이상 읽을 줄이 없을 때 빈 문자열을 반환 ( line != '' )
# None != '', 따라서 변수 line 을 만들지 않고 while 을 실행하면
# 없는 변수와 빈 문자열 '' 을 비교하게 되므로 에러가 발생
# 또한 None 이 아닌 '' 로 초기화하면 while 도 실행을 못 함
