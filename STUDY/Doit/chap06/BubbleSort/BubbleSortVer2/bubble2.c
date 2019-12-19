#include <stdio.h>
#include <stdlib.h>
#define swap (type, x, y) do { type t = x; x = y; y = t; } while(0)

void bubble_sort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++) {
        int exchg = 0;
        for (j = n - 1; j > i; j--)
            if (arr[j - 1] > arr[j]) {
                swap(int, arr[j - 1], arr[j]);
                exchg++;
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