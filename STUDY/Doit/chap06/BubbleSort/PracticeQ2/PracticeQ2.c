#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main_process();
void swap(int *x, int *y);
void bubble_sort(int arr[], int n);

int main()
{
    main_process();

    return 0;
}

void main_process()
{
    int arr[] = { 6, 4, 3, 7, 1, 9, 8 };
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    
}

void bubble_sort(int arr[], int n)
{
    int cnt_cmp = 0, cnt_swap = 0;
    int i, j, k;
    bool swap_flag = false;
    int swap_index = n - 2;
    int tmp = 0;

    for (i=0; i<n; i++) 
    { // i start
        printf("패스%d\n", i);
        swap_index = n - 2;


        for (j=0; j<n-i; j++)
        { // j start


            for (k=0; k<n; k++)
            { // k start
                printf("%2d ", arr[k]);
                if (k==swap_index)
                {
                    if (arr[k] > arr[k+1])
                    {
                        cnt_cmp++;
                        swap_flag = true;
                        printf("+");
                    }
                    else if (j == n-i-1)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("-");
                        cnt_cmp++;
                    }
                }                
                else
                    printf(" ");
            } // k end, 한 줄 프린터, 끝난 뒤 스왑해야함.


            if (swap_flag == true){
                swap(&arr[swap_index], &arr[swap_index+1]);
                swap_flag = false;
                cnt_swap++;
            }
            swap_index--;
            printf("\n");
        } // j end, 여러 줄 프린터


    } // i end, 패스 프린터

    printf("비교를 %d회 했습니다.\n교환을 %d회 했습니다.\n", cnt_cmp, cnt_swap);
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}