#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf ("Enter the values of a b c");
    scanf ("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
   
    switch(d > 0)
    {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Two distinct and real roots exists: %f, %f", r1, r2);
            break;
        
        case 0:
            switch(d < 0)
            {
                case 1:
                    printf("Two distinct complex roots exist");
                    break;

                case 0:
                    r1 = r2 = -b / (2 * a);
                    printf("Two equal and real roots exists: %f, %f", r1, r2);
                    break;
            }
    }
    return 0;
}