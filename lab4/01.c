#include <stdio.h>
#include <stdlib.h>

int main()
{
    char number_str[10];
    fgets(number_str,10,stdin);
    int number = atoi(number_str);
    int b2 = 0b0;
    printf("Binary number of %d is ",number);
    for (int i = 3; i >= 0; i-- ){
        printf("%d",((number >> i) %2));
    }
    printf(".");
}
