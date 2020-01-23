def quick_sort(a):
    answer = []
    n = len(a)
    if n <= 1:
        return answer
    center = n // 2

    for i in range(n):
        if i == center:
            continue
        if a[i] <= a[center]:
            