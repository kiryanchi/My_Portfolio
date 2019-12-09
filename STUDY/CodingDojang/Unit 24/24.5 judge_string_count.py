# 내 답안
import string
count = 0
original = input().split(" ")
for i in range(len(original)):
    original[i] = original[i].strip(string.punctuation)
    if original[i] == 'the':
        count += 1
print(count)

# 모범답안
count = 0
org = input().split(' ')
for i in org:
    if i.strip(',.') == 'the':
        count += 1
print(count)