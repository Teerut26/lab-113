#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    letter = getchar();

    if (letter >= 65 && letter <= 90)
    {
        printf("Output: upper case");
    }
    else if (letter >= 97 && letter <= 122)
    {
        printf("Output: lower case");
    }
    else if (letter >= 48 && letter <= 57)
    {
        printf("Output: digit");
    }
    else
    {
        printf("Output: others");
    }

    return 0;
}