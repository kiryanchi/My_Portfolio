# Unit 28. 회문판별과 N-gram 만들기
# 28.1 회문을 검사하는 여러가지 방법들
word = input('단어를 입력하세요: ')

#1
print(word == word[::-1])

#2
list(word) == list(reversed(word))

#3
word == ''.join(reversed(word))
