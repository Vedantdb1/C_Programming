//program to divide two numbers
#include <stdio.h>
#include <stdlib.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Cannot divide by zero\n");
    }
    else
    {
        printf("Division is %d\n", iRet);
    }

    return EXIT_SUCCESS;
}
