# 메이플 스토리 헬퍼
# 기능
#   1. 일일퀘스트 난이도
from PIL import ImageGrab
from frame import print_main, print_select_menu
import win32gui

if __name__ == '__main__':
    print_main()
    print_select_menu()

    choice = input('원하는 기능을 입력하세요:')

    # 일일 퀘스트 선택시
    if choice == 1:
        # TODO
        # 이미지를 캡쳐한 뒤,
        # 알맞게 이미지를 잘라낸 후,
        # 글자를 인식해서
        # 난이도를 표시한다.
        image = ImageGrab.grab()
        saveas = 'screenshot.png'
        image.save(saveas)
        image.show()