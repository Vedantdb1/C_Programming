//Accept two numbers and display the first number the specified number of times

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    iFrequency = abs(iFrequency);

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}
