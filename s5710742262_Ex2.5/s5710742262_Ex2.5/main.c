#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A;
    printf("Put Integer 1 :");
    scanf("%d",&A);
    printf("Put Integer 2 :");
    int B;
    scanf("%d",&B);
    int C;
    int D;
    C=A-B;
    D=B-A;
    if (C>0)
    {
        printf("|Integer 1 - Integer 2|=%d",C);
    }
    else if (B>A)
    {
        printf("|Integer 1 - Integer 2|=%d",D);
    }
    return 0;
}
