#include <stdio.h>
#include <stdlib.h>

int main()
{
    char width_str[10], height_str[10];
    fgets(width_str,10,stdin);
    fgets(height_str,10,stdin);

    int width = atoi(width_str);
    int height = atoi(height_str);

    for (int i = 1; i <= height; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (j > 1)
            {

                printf(" ");
            }
        }

        for (int j = 1; j <= width; j++)
        {
            if (j > 1 && j < width && (i > 1 && i < height))
            {
                printf(" ");
            }
            else
            {

                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}