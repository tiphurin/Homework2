#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("Please enter base 10 number :");
    scanf("%d",&A);
    int B;
    printf("Please select output base [8 or 16]: ");
    scanf("%d",&B);
    if ((B==8))
    {
        printf("Octal Number is : %o",A);
    }
    else if ((B==16))
    {
        printf("Hexadecimal Number is :%x",A);
    }
    return 0;
}
