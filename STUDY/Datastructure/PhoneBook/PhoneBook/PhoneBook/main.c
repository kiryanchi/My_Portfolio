#include <stdio.h>

int gcd(int x, int y);
int min(int x, int y);
int max(int x, int y);

int main(void)
{
    const int x = 22, y = 8;
    printf("test");
    printf("%d\n", gcd(x, y));
    return 0;
}

int gcd(int x, int y)
{
    // x = 22, b = 8
    int mx = max(x, y), mn = min(x, y);
    
    while (mx % mn != 0) {
        gcd(mn, mx % mn);
    }
    return mn;
}

int min(int x, int y)
{
    return x < y ? x : y;
}

int max(int x, int y)
{
    return x > y ? x : y;
}
