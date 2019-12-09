# 27.5 practice_file
# words.txt
'''
anonymously
compatibility
dashboard
experience
photography
spotlight
warehouse
'''
with open('words.txt', 'r') as file:
    count = 0
    line = None
    while line != '':
        line = file.readline()
        if len(line) <= 10:
            count += 1
    print(count)

# 모범답안?
'''
with open('words.txt', 'r') as file:
    count = 0
    words = file.readlines()
    for word in words:
        if len(word.strip('\n')) <= 10:
            count += 1

'''
