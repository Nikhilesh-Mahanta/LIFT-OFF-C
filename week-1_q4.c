#include<stdio.h>

void main() 
{
    float Physics,Chemistry,Biology,Maths,Computer,Percentage,Marksobtained,Fullmarks;
    printf("Enter the marks in Physics:");
    scanf("%f", &Physics);
    printf("Enter the marks in Chemistry:");
    scanf("%f", &Chemistry);
    printf("Enter the marks in Biology:");
    scanf("%f", &Biology);
    printf("Enter the marks in Maths:");
    scanf("%f", &Maths);
    printf("Enter the marks in Computer:");
    scanf("%f", &Computer);
    printf("Full marks =");
    scanf("%f", &Fullmarks);

    Marksobtained = Physics + Chemistry + Biology + Maths + Computer;
    Percentage = (Marksobtained/Fullmarks)*100;
    printf("Percentage = %f\n",Percentage);

    if(Percentage >= 90 && 100 >= Percentage) 
    {
        printf("Grade A\n");
    }
    else if(Percentage >= 80 && Percentage < 90)
    {
        printf("Grade B\n");
    }
    else if(Percentage >= 70 && Percentage < 80)
    {
        printf("Grade C\n");
    }
    else if(Percentage >= 60 && Percentage < 70)
    {
        printf("Grade D\n");
    }
    else if(Percentage >= 40 && Percentage < 60)
    {
        printf("Grade E\n");
    }
    else if(Percentage >= 0 && Percentage < 40)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Wrong input\n");
    }
}
