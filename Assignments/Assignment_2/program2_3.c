// Print Hello if the number is less than 10, otherwise print Demo

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
