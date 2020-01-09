from abc import *

class Daily(metaclass=ABCMeta):
    def __init__(self):
        self.EasyQuest = []
        self.HardQuest = []
        self.Area = []
        self.Quest = []


class vanishing_journey(Daily):
    def __init__(self):
        super.__init__()
        self.Area = ('망각의 호수', '소멸의 화염지대', '안식의 동굴')
        self.Quest = [ ('기쁨의 에르다스 200마리 처치', '하',),
                       ('분노의 에르다스 200마리 처치', '최하'),
                       ('슬픔의 에르다스 200마리 처치', '최하'),
                       ('즐거움의 에르다스 200마리 처치', '중'),
                       ('기쁨의 에르다 샘플 50개 수집', '하'),
                       ('분노의 에르다 샘플 50개 수집', '최하'),
                       ('슬픔의 에르다 샘플 50개 수집', '최하'),
                       ('즐거움의 에르다 샘플 50개 수집', '중'),
                       ('망각 억제제 30개 전달 (풍화된 분노와 슬픔의 땅 - 제나)', '최하')
                       # 망각의 호수
                       ('암석의 에르다스 200마리 처치', '하'),
                       ('화염의 에르다스 200마리 처치', '최하'),
                       ('강인한 영혼의 에르다스 200마리 처치', '최하'),
                       ('암석의 에르다 샘플 50개 수집', '하'),
                       ('화염의 에르다 샘플 50개 수집', '최하'),
                       ('강인한 영혼의 에르다 샘플 50개 수집', '최하'),
                       ('소멸 억제제 30개 전달 (화염의 영토 - 제나)', '최하'),
                       #소멸의 화염지대
                       ('안식의 에르다스 200마리 처치', '중'),
                       ('에르다스의 등불 130마리 처치', '중'),
                       ('안식의 에르다 샘플 50개 수집', '중'),
                       ('등불의 에르다 샘플 33개 수집', '중'),
                       ('안식 억제제 30개 전달 (동굴 아래쪽 - 제나)', '중')
                       ]

class chew_chew(Daily):
    pass

class lachelein(Daily):
    pass
