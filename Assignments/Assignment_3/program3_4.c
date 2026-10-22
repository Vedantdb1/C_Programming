// If the user enters a lowercase character, convert it to uppercase. If uppercase, convert it to lowercase

#include <stdio.h>
#include <stdlib.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}
