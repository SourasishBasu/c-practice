#include <stdio.h>
void main()
{
    int s, qui, add, god;
    printf("Enter values for qui, add and god: ");
    scanf("%d %d %d", &qui, &add, &god);
    s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;
    printf("%d", s);
}