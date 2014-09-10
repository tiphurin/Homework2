#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("Enter integer number :");
    scanf("%d",&A);
    if (((A%2)&&(A%3))==0)
        printf("Number is Divisible.\n");
    else
        printf("Number isn't Divisible.\n");
}
