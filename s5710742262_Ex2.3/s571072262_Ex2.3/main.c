#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("Enter integer number :");
    scanf("%d",&A);
    if ((40<A)&&(A<=100))
        printf("True.\n");
    else
        printf("False.\n");
    return 0;
}
