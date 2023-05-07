#include <stdio.h>
#include <math.h>
void res()
{
    int x,y, res;
    printf("Enter x and y:\n");
    scanf("%d %d", &x, &y);
    res = pow(x, y);
    if (x%5==0)
    {
        res = res + 1;
    }
    printf("Power: %d", res);
}
void main()
{
    res();
}