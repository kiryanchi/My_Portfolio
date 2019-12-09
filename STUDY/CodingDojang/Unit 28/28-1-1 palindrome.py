# Unit 28. 회문판별과 N-gram 만들기
# 회문 : 순서를 거꾸로 읽어도 제대로 읽은 것과 같은 단어와 문장
# 예를 들어, level, sos, rotator, nurses run
# 판별법 : 첫 글자와 마지막 글자가 같다. 하나씩 좁혀가며 같은지 판단

import string
word = input("회문 판별 :")
word.maketrans(' ', '')     # 공백 제거?
palindrome = True

# 짝수일 경우
for i in range(len(word) // 2):
    if word[i] != word[-1 - i]:
        palindrome = False
        break

print(palindrome)
