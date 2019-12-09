matrix = []

col, row = map(int, input().split())

for i in range(row):
    matrix.append(list(input()))

for i in range(row):
    for j in range(col):
        if matrix[i][j] == '.':
            matrix[i][j] = 0

# * 가 나오면 주위 8칸에 +1 을 한다.
for i in range(row):
    for j in range(col):
        if matrix[i][j] == '*':
            # 윗줄이 음수 인덱스가 아니라면
            if i-1 >= 0:
                # 윗줄로 올라가서 전, 위, 후 칸을 검사한다.
                if j - 1 >= 0 and matrix[i-1][j-1] != '*':
                    matrix[i-1][j-1] += 1
                if matrix[i-1][j] != '*':
                    matrix[i-1][j] += 1
                if j + 1 < col and matrix[i-1][j+1] != '*':
                    matrix[i-1][j+1] += 1
            # 바로 그 줄
            if j-1 >= 0 and matrix[i][j-1] != '*':
                matrix[i][j-1] += 1

            if j+1 < col and matrix[i][j+1] != '*':
                matrix[i][j+1] += 1

            if i+1 < row:
                if j-1 >= 0 and matrix[i+1][j-1] != '*':
                    matrix[i+1][j-1] += 1
                if matrix[i+1][j] != '*':
                    matrix[i+1][j] += 1
                if j+1 < col and matrix[i+1][j+1] != '*':
                    matrix[i+1][j+1] += 1

for i in matrix:
    for j in i:
        print(j, end='')
    print()