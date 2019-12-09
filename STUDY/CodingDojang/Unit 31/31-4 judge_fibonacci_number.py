def fib(n):
    fiblist = [0, 1]
    if n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else :
        for i in range(n-1):
            fiblist.append(fiblist[i] + fiblist[i+1])
        return fiblist[-1]


n = int(input())
print(fib(n))