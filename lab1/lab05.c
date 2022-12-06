#include <stdio.h>

int main(){
    int amount = 98;

    int n1 = amount % 50 % 20 % 5 / 1;
    int n2 = amount % 50 % 20 / 5;
    int n3 = amount % 50 / 20;
    int n4 = amount / 50;

    printf("1: %d\n",n1);
    printf("5: %d\n",n2);
    printf("20: %d\n",n3);
    printf("50: %d",n4);
    return 0;
}