/*
    단순 삽입 정렬이란...

    선택한 요소를 그보다 더 앞쪽의 알맞은 위치에 삽입하는 작업을 반복하여 정렬하는 ㅏㅇㄹ고리즘.

    선택정렬과 비슷해보이지만 선택정렬은 값이 가장 작은 요소를 선택해 알맞은 위치로 옮긴다는 점에서 다름.
*/

#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int tmp = a[i];
        while (j >= 0 && tmp < a[j]) {
            a[i] = a[j];
            j--;
        }
        a[j] = tmp;
    }
}

int main(void)
{
    int i, nx;
    int *x;

    puts("삽입 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = (int *)malloc(sizeof(int)*nx);

    for (i=0; i<nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    insertion(x, nx);

    puts("오름차순으로 정렬했습니다.");
    for(i=0; i<nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    
    free(x);

    return 0;
}