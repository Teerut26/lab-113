#include <stdio.h>
#define PI 3.14;

int main() 
{

    int computer_time = 1678;
    int day = computer_time / 60 / 24;
    int hour = computer_time / 60 % 24;
    int minute = computer_time % 60;
    printf("It is %d days %d hours and %d minutes.",day,hour,minute);
    return 0;
}