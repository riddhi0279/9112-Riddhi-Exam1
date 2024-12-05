// Write a C program to find the sum of the first and last digit of a number . using a while loop.

#include <stdio.h>
void main()
{
    int num, firstdigit, lastdigit, sum;

    printf("Enter  numbers : ");
    scanf("%d", &num);

    lastdigit = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }
    firstdigit = num;

    
    sum = firstdigit + lastdigit;

    
    printf("Sum of first and last digit: %d\n", sum);

    
}
