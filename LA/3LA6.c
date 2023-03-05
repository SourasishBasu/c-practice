#include <stdio.h>
void main()
{
    float a;
    printf("Enter marks: ");
    scanf("%f", &a);
    if (a<=100 && a>=91)
        printf("Grade O");
    else if (a>=81 && a<=90)
        printf("Grade E");
    else if (a>=71 && a<=80)
        printf("Grade A");
    else if (a>=61 && a<=70)
        printf("Grade B");
    else if (a>=51 && a<=60)
        printf("Grade C");
    else if (a>=41 && a<=50)
        printf("Grade D");
    else
        printf(" Grade F");
}