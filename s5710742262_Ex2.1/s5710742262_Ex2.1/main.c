#include <stdio.h>
int main()
{
    int A;
    printf("Enter integer number :");
    scanf("%d",&A);
    if ((A%2)==0)
        printf("Number is even.\n");
    else
        printf("Number is odd.\n");
    return 0;
}
