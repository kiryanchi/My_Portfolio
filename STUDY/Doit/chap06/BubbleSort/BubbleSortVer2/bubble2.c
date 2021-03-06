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
    int i;
    int tmp;
    for (i = 0; i < n; i++) {
        bool flag_swap = false;
        for (int j = n -1; j > i; j--) {
            if (arr[j] < arr[j-1]) {
                swap(&arr[j], &arr[j-1]);
                flag_swap = true;
            }
        if (flag_swap == false) break;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
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

    bubble_sort(x, nx);

    for(i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);

    return 0;
}