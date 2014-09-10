#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X;
    float Y;
    printf("Please enter coordinate (X,Y)");
    scanf("%f %f",&X,&Y);
    if ((X>0)&&(Y>0))
    {
        printf("Result: Q1");
    }
    else if ((X<0)&&(Y>0))
    {
        printf("Result: Q2");
    }
    else if ((X<0)&&(Y<0))
    {
        printf("Result: Q3");
    }
    else if ((X>0)&&(Y<0))
    {
        printf("Result: Q4");
    }
    else if ((X==0)&&(Y==0))
    {
        printf("No Quadant");
    }
    return 0;
}
