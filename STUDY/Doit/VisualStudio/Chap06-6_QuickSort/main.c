/*
	퀵 정렬.

	기준을 세우고(pivot) 왼쪽 끝 요소를 pl, 오른쪽 끝 요소를 pr 이라고 하면,
	피봇을 선정할 때, 랜덤으로 선정하기도 한다. 
	최악의 경우 O(N^2) 이 될 수도 있다.
	평균 O(N*logN) 이다.
*/

#include <stdio.h>
#include <stdlib.h>

// pl : 왼쪽편 (왼쪽에서 오른쪽으로 이동하며 피벗x보다 큰 값을 찾는다), pr : 오른쪽편 (오른쪽에서 왼쪽으로 이동하며 피벗x보다 작은 값을 찾는다), x : 피벗 (기준값)
void quick(int a[], int pl, int pr, int x)
{
	if (pl > pr)
	{
		//TODO : 끝나면 된다.
	}
	// exit condition

	while (a[pl] >= x) {

		pl++;
	}
}