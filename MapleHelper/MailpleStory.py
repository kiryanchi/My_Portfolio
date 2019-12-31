# 메이플 스토리 헬퍼
# 기능
#   1. 일일퀘스트 난이도

# main 함수



def print_main():
    print('*********************************************************************')
    print('*                    매일플스토리                                   *')
    print('*                                         -제작 박기현              *')
    print('*********************************************************************')

def select_menu():
    print('\t1. 일일퀘스트')
    print('\t아직 미구현')


if __name__ == '__main__':
    select = ''
    print_main()
    select_menu()

    select = input('원하는 항목을 선택해주세요')

    if select == 1 or select == '일일퀘스트':
        