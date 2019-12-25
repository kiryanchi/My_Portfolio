#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;
        for (int j = n - 1; j > i; j--) 
            if (arr[j - 1] > arr[j]) {
                swap(&arr[j], &arr[j-1]);
                flag = true;
            }
        if (flag == false) break;
    }
}

int is_sorted(const int arr[], int n)
{
    bool flag = false;
    for (int i = n - 1; i > 0; i--)
        if (arr[i - 1] > arr[i])
            flag = true;
    
    return flag ? 0 : 1;
}

int main()
{
    int i, nx;
    int *x;

    puts("버블 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    printf("isSorted? : %d\n", is_sorted(x, nx));

    bubble_sort(x, nx);

    printf("isSorted? : %d\n", is_sorted(x, nx));

    printf("오름차순으로 정렬했습니다.\n");
    for(i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);

    return 0;
}