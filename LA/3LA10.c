#include <stdio.h>
void main()
{
    int m, a;
    printf("Enter grade: ");
    scanf("%d", &m);
    a = m / 10;
    switch(a)
    {
        case 1:
            printf("Grade is F");
            break;
        case 2:
            printf("Grade is F");
            break;
        case 3:
            printf("Grade is F");
            break;
        case 4:
            printf("Grade is F");
            break;
        case 5:
            printf("Grade is D");
            break;
        case 6:
            printf("Grade is C");
            break;
        case 7:
            printf("Grade is B");
            break;
        case 8:
            printf("Grade is A");
            break;
        case 9:
            printf("Grade is E");
            break;
        case 10:
            printf("Grade is O");
            break;
        default:
            printf("Invalid");
            break;
    }
}