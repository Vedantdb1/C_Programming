// Program to print even numbers from 1 to n

#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        printf("%d ", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
