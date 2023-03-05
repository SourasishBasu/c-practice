
/* 27/2/23
3.1.WAP to input 2 distinct integers and display the greater of 2 integers
3.2.WAP to input any 3 integers distinct and display the greater of 3 integers
3.3.WAP to test whether a number entered through the keyboard is ODD or EVEN
3.4.WAP to read an alphabet from the user and convert it into lowercase if the entered alphabet is in uppercase otherwise display an appropriate message
3.5.WAP to input any two integers and provide a menu the the user to select any of the options as add subtract multiply divide and display the result accordingly
3.6.WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use else if ladder statement
3.7.WAP to check a year is leap year or not using one if else statment
3.8.WAP to find the roots of a quadratic equation ax2+bx+c=0 using if else statement
3.9.WAP to find the roots of a quadratic equation ax2+bx+c using switch case
3.10.WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Assume marks are integer values, Use switch case.
*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is greater than %d", a, b);
    else if (b> a)
        printf("%d is greater than %d", b, a);
    else if (a == b)
        printf("%d is equal to %d", a, b);

}