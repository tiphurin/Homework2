#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A;
    printf("Please enter score :");
    scanf("%f",&A);
    if ((A>=80))
    {
        printf("Your grade : A",A);
    }
    else if ((A>=70)&&(A<=79))
    {
        printf("Your grade : B",A);
    }
    else if ((A>=60)&&(A<=69))
    {
        printf("Your grade : C",A);
    }
    else if ((A>=50)&&(A<=59))
    {
        printf("Your grade : D",A);
    }
    else if ((A<50))
    {
        printf("Your grade : F",A);
    }
    return 0;
}
