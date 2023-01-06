#include <stdio.h>

int main()
{
    int i, a[5], b[5], c[10];

    printf("Enter array a: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &a[i]);
        printf("%d\n", a[i]);
    }
    printf("Enter array b: \n");
    for (i = 5; i < 10; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &b[i]);
        printf("%d\n", b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        // printf("%d", a[i]);
        c[i] = a[i];
    }

    printf("\n");

    for (i = 5; i < 10; i++)
    {
        // printf("%d", b[i]);
        c[i] = b[i];
    }

    printf("Array c: ");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i]);

    printf("\n");
    return 0;
}