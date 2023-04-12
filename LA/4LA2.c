#include <stdio.h>
void main()
{
    int on, act, ink;
    float tig;
    printf("Enter values for tig, act and ink: ");
    scanf("%f %d %d", &tig, &ink, &act);
    on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
    printf("%d", on);
}