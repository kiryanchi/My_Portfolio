#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n)
{
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		int tmp = a[i];
		while (j > 0 && tmp < a[j]) {
			a[j + 1] = a[j];
 			j--;
		}
		a[j + 1] = tmp;
	}
}

int main(void)
{
	int i, nx;
	int* x;

	puts("삽입 정렬");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = (int*)malloc(sizeof(int) * nx);

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}