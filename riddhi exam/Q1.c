// Write a C program to find thrid angle of a triangle if two angles are give.

#include<stdio.h>
void main()
{
    int angle1 , angle2 , angle3 , sum;

    printf("enter the value of angle 1 = ");
    scanf("%d",&angle1);

    printf("enter the value of angle 2 = ");
    scanf("%d",&angle2);

    // 180 degree = angle 1 + angle 2 + angle 3
    angle3 = 180 - angle1 - angle2;
 

    printf("the value of angle 3 is = %d " , angle3);
}