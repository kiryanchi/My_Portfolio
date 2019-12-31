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
        self.Quest = [ ('기쁨의 에르다스 200마리 처치', '하',), ()]

class chew_chew(Daily):
    pass

class lachelein(Daily):
    pass
