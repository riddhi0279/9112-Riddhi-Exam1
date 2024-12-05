// Wirte a C program to enter a number and print its reverse. Using For loop.

#include <stdio.h>
void main()
{
    int num =1 , reverse = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (; num != 0; num /= 10)
    {
        remainder = num % 10;               
        reverse = reverse * 10 + remainder; 
    }

    
    printf("Reversed number: %d\n", reverse);

    
}

