#include <stdio.h>

void hanoi(int num_of_top, int x, int y)
{
    /* 
        만약 탑이 3개라면, 
        맨 아래의 것 (3) 을 제외한 나머지를 하나로 보고 옮기는 과정이 있으면 된다.
        그럼 옮기는 과정을 일반화 하면 된다.
        if n == 1, 
    */
    // 6 - x -y : 중간기둥. 기둥 번호 3개를 합하면 6이므로, 시작기둥과 목표기둥이 아닌 기둥은 6 - x - y 로 구할 수 있다. 
    if (num_of_top > 1)
        hanoi(num_of_top-1, x, 6-x-y);
    printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김\n", num_of_top, x, y);

    if (num_of_top > 1)
        hanoi(num_of_top-1, 6-x-y, y);
}

int main()
{
    const int num_of_top = 3;

    hanoi(num_of_top,1, 3);
}