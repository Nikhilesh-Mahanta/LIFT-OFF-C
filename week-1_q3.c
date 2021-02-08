#include<stdio.h>

void main() 
{
    float radius,diameter,circumference,area;
    printf("Enter the radius:");
    scanf("%f", &radius);
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;
    printf("diameter = %f\n",diameter );
    printf("circumference = %f\n",circumference);
    printf("area = %f\n",area);
}
