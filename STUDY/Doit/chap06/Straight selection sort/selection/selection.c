/*
    기본 개념
    단순 선택 정렬 : 가장 작은 요소부터 선택해 알맞은 위치로 옮겨서 순서대로 정렬하는 알고리즘.

    { 6, 4, 8, 3, 1, 9, 7 } 에 적용해보면,
    1. '1' 이 가장 작은 숫자 -> '1' 과 '6' 을 교환.
    2. '3' 이 가장 작은 숫자 -> '3' 과 '4' 를 교환.
    3. '4' 가 가장 작은 숫자 -> '4' 와 '8' 을 교환.
*/
#include <stdio.h>
#include <stdlib.h>
#define swap (type, x, y) do { type t = x; x = y; y = t; } while (0)

void selection(int a[], int n)
{
    int i, j;
    for (i=0; i<n-1; i++) {
        int min = i;
        for (j=i+1; j<n; j++)
            if(a[j] < a[min])
                min = j;
        swap(int, a[i], a[min]);
        
    }
}

int main(void)
{
    int i, nx;
    int *x;

    puts("버블 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = (int *)malloc(sizeof(int)*nx);

    for (i=0; i<nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    selection(x, nx);

    puts("오름차순으로 정렬했습니다.");
    for(i=0; i<nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    
    free(x);

    return 0;
}