//2. Print * a given number of times using a decrementing while loop

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
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
