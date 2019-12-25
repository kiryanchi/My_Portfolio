#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void swap(int* x, int* y)
{
   int tmp = *x;
   *x = *y;
   *y = tmp;
}

// 양방향 버블 정렬(bidirection buuble sort), 칵테일 정렬(cocktail sort), 셰이커 정렬(shaker sort)
// 홀수 번째 패스는 가장 작은 요소를 맨 앞으로 옮기고
// 짝수 번째 패스는 가장 큰 요소를 맨 뒤로 옮기는 방식으로 사용 (패스의 스캔 방향을 교대로 바꾸면)
void cocktail(int arr[], int n)
{
   // ex) 9 1 3 4 5 6 7 8 은 1번째 index부터는 정렬되어있지만 한 번 바꾸는 순간 계속계속 바뀌어야 한다. 즉 비효율적.
   /*
      1. 좌측 지점부터 우측 지점으로 비교 작업을 진행. 교환할 자료가 있으면 교환하면서 우측 지점까지 진행.
      2. 마지막에 교환이 이루어진 곳을 우측 지점으로 설정.
      3. 이번에는 반대로 우측 지점부터 좌측 지점으로 비교 작업을 진행. 교환할 자료가 있으면 교환.
      4. 마지막에 교환이 이루어진 곳을 좌측 지점으로 설정.
      5. 좌측 지점과 우측 지점이 교차하지 않았다면 아직 정렬할 자료가 남아있으므로 앞의 작업을 반복. ** 핵심
   */
   int left = 0, right = n - 1, last = n - 1;
    while (left < right) {      
    int i;
      for (i = left; i < right; i++) {
         if (arr[i] < arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
            last = i;
         }
      }
      right = last;
      for (i = last; i > left; i--) {
          if (arr[i] > arr[i - 1]) {
              swap(&arr[i], &arr[i - 1]);
              left = i;
          }
      }
      left = last;
   }
}

int main()
{
   int i, nx;
   int* x;

   puts("버블 정렬");
   printf("요소 개수 : ");
   scanf("%d", &nx);
   x = calloc(nx, sizeof(int));

   for (i = 0; i < nx; i++) {
      printf("x[%d] : ", i);
      scanf("%d", &x[i]);
   }

   cocktail(x, nx);

   for (i = 0; i < nx; i++)
      printf("x[%d] = %d\n", i, x[i]);

   free(x);

   return 0;
}