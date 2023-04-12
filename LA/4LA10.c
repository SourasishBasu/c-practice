#include <stdio.h>
void main()
{
    int cp, dis, mp, sp;
    cp = 100;
    printf("Enter Mark Price and discount: ");
    scanf("%d%d", &mp, &dis);
    sp = mp - ((mp * dis) / 100);
    if (sp < cp)
        printf("Loss");
    else
        printf("Profit");
}