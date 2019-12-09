# pickling : 파이썬 객체를 파일에 저장
# unpickling : 파일에서 객체를 읽음

# 27.3.1 파이썬 객체를 파일에 저장하기
import pickle

name = 'james'
age = 17
address = '서울시 서초구 반포동'
scores = {'korean': 90, 'english': 95, 'mathematics': 85, 'science': 82}

with open('jams.p', 'wb') as file:
    pickle.dump(name, file)
    pickle.dump(age, file)
    pickle.dump(address, file)
    pickle.dump(scores, file)

# 소스코드를 실행하면 .py가 있는 곳에 james.p 파일이 생성 pickle 의 p
# 다른 확장자도 상관없다.
# 특히 pickle.dump로 객체를 저장할 때, 'wb' 모드로 해야함.
