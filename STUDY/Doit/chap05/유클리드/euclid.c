#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int x = 22, y = 8;

    printf("%d\n", gcd(x, y));
    return 0;
}

int gcd(int x, int y)
{
    if (y==0)
        return x;
    else
        return gcd(y, x % y);    
}