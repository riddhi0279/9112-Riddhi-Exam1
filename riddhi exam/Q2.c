// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

#include <stdio.h>
void main()
{

    int age;

    printf("enter your age = ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you are eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
    }
}