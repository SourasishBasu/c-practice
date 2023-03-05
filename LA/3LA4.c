#include <stdio.h>

int main()
{
    char a;
    printf("Enter character: ");
    scanf("%c", &a);

    if ((90 >= a) && (a >= 65))
    {
        printf("%c is in Uppercase.\n", a);
        a = a + 32;
        printf("Lower Caps: %c", a);
    }
    else if (122 >= a && a >= 97)
    {
        printf("%c is in Lowercase.\n", a);
    }
    
    return 0;
}