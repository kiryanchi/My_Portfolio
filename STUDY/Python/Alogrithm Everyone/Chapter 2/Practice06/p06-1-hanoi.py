# 하노이탑

def hanoi(n, from_pos, to_pos, aux_pos):
    if n == 1:
        print(from_pos, " -> ", to_pos)
        return
    
    hanoi(n-1, )