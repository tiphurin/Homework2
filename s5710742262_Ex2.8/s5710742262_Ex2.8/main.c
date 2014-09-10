#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    int Sum;
    printf("Please enter midterm final :");
    scanf("%d %d",&A,&B);
    Sum=A+B;
    if (Sum>=50)
    {
        printf("Passed with score :%d",Sum);
    }
    else if (Sum<50)
    {
        printf("Failed with score :%d",Sum);
    }
    return 0;
}
