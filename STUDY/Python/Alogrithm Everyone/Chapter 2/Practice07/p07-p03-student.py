# 연습문제 3
# 학생 번호와 이름이 리스트로 주어졌을 때, 학생 번호를 입력하면 그 학생 이름이 반환

def search_student(stu_no, stu_name, find_number):
    for i in range(0, len(stu_no)):
        if stu_no[i] == find_number:
            return stu_name[i]
    return '?'

stu_no = [39, 14, 67, 105]
stu_name = ['Justin', 'John', 'Mike', 'Summer']

print(search_student(stu_no, stu_name, 14))