# Unit 28. 회문판별과 N-gram 만들기
# 28.2 N-gram 만들기
# N-gram : 문자열에서 N개의 연속된 요소를 추출하는 방법
# 2-gram : Hello -> He, el, ll, lo
# 3-gram, 4-gram 다양함

# 28.2.1 반복문으로 N-gram 출력하기
# 이것은 글자단위 N-gram
text = 'Hello'

for i in range(len(text) - 1):
    print(text[i], text[i + 1], sep='')


# 문장단위 N-gram
text = 'this is python script'
word = text.split()

for i in range( len(word) - 1):
    print(words[i], words[i + 1])
