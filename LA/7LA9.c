#include <math.h>
#include <stdio.h>
int main() 
{
    int i, n, z;
    float sum = 0.0, mean, SD = 0.0;
    float arr[10];
    for (n = 0; n < 10; ++n)
    {
        printf("Enter 10 elements: ");
        scanf("%f", &arr[n]);
    }
    for (n = 0; n < 10; ++n) 
    {
        sum += arr[n];
    }
    mean = sum / 10;
    for (n = 0; n < 10; ++n) 
    {
        SD += pow((arr[n] - mean), 2);
    }
    z = sqrt(SD / 10);

    printf("\nStandard Deviation = %f", z);
    return 0;
}