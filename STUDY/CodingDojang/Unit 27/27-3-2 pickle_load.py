# 언피클링. 반드시 'rb' 바이너리 읽기 모드로 해야함.
# 27.3 pickling
import pickle

with open('james.p', 'rb') as file:
    name = pickle.load(file)
    age = pickle.load(file)
    address = pickle.load(address)
    scores = pickle.load(scores)
    print(name, age, address, scores)

# 앞에서 james.p를 저장할 때, pickle.dump를 4번 사용
# 마찬가지로 pickle.load를 4번 사용해아함
# name, age, address, scores 순으로 저장했으니 순차적으로 가져오면 됨.

# 다른 파일 모드
# r : 읽기모드
# w : 쓰기모드
# a : 추가모드, 이미 있는 파일에서 끝에 새로운 내용을 추가
# x : 배타적 생성모드, 파일이 이미 있으면 에러, 없으면 파일 만듦

# 파일의 형식
# t : 텍스트모드
# b : 바이너리 모드

# + : 읽기/쓰기 모드

# 파일 열기
# 읽기 전용 : 'r'
# 쓰기 전용 : 'w' 파일의 내용을 버림, 'a' 파일의 끝에 추가, 'x' 파일이 있으면 에러
# 읽기/쓰기 : 'w+' 파일의 내용을 버림, 
