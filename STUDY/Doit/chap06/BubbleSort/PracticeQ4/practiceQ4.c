#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

/*
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
*/

void bubble_sort(int arr[], int n)
{
    int cnt_cmp = 0, cnt_swap = 0;

    for (int i = 1; i < n; i++) {
        printf("패스%d\n", i);
        for (int j = n - 1; j >= 0; j--) {
            bool flag = false;
            for (int k = 0; k < n; k++) {
                printf("%2d ", arr[k]);
                if (k == j - 1) {
                    if (arr[j] < arr[j-1]) {
                        printf("+");
                        flag = true;
                    }
                    else
                        printf("-");
                }
                else
                    printf(" ");
            }
            if (flag == false) break;
            else {
                swap(&arr[j], &arr[j-1]);
                cnt_swap++;
                printf("\n");
            }
        }
        printf("\n");
    }
    printf("비교를 %d회 했습니다.\n교환을 %d회 했습니다.\n", cnt_cmp, cnt_swap);
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

    printf("오름차순으로 정렬했습니다.\n");

    for(i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);

    return 0;
}