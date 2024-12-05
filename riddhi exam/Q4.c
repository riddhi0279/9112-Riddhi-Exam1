// write a c program to calculate the answer of given formula 

#include <stdio.h>
void main() {
    
    float radius, answer;

    
    printf("Enter the value of  radius : ");
    scanf("%f", &radius);

    answer = (4.0 / 3.0) * 3.14 *radius*radius*radius;

    
    printf("The answer  is: %.2f\n", answer);


}
