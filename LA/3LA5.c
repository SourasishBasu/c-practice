#include <stdio.h>

void main()
{
/*
    int a, b, choice, result, mod;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter choice (1 = sum, 2 = subtract, 3 = multiply, 4 = div, 5 = modulus): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = a + b;
        printf("%d is the sum", result);
    }
    else if (choice == 2)
    {
        result = a - b;
        printf("%d is the difference", result);
    }
    else if (choice == 3)
    {
        result = a * b;
        printf("%d is the product", result);
    }
    else if (choice == 4)
    {
        result = a/b;
        printf("%d is the quotient\n", result);
    }
    else if (choice == 5)
    {
        result = a % b;
        printf("%d is the remainder", result);
    } 
*/
    int a, b, choice, result;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter choice (1 = sum, 2 = subtract, 3 = multiply, 4 = div, 5 = modulus): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: result = a + b;
            printf("Result is: %d", result);
            break;
        case 2: result = a - b;
            printf("Result is: %d", result);
            break;
        case 3: result = a * b;
            printf("Result is: %d", result);
            break;
        case 4: result = a / b;
            printf("Result is: %d", result);
            break;
        case 5: result = a % b;
            printf("Result is: %d", result);
            break;
        default:
            printf("Invalid Input");
            break;
    }
}