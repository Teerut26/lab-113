#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hour_str[10], min_str[10];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 10, stdin);

    printf("Enter minute: ");
    fgets(min_str, 10,stdin);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d",hour,min);
    return 0;
}