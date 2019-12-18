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
    
    for (i=0; i<n; i++) {
        printf("패스%d\n", i);
        for (j=0; j<n; j++) {
            for (k=0; k<n; k++) {
                printf("%2d ", arr[k]);
                if (k == swap_index) {
                    if (arr[k] > arr[k+1]){
                        printf("+");
                        swap_flag=true;
                    }
                    else
                        printf("-");
                }
                else
                    printf(" ");
            } // for k
            printf("\n");
            if(swap_flag == true)
                swap(
            swap_index--;
        } // for j
    } // for i
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
