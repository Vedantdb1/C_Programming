//Check whether a number is even or odd

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return EXIT_SUCCESS;
}
