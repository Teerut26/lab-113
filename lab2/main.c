#include <stdio.h>
#include <stdlib.h>

char str[10];

int main(){
    // gets(str);
    fgets(str,10,stdin);
    printf("input - %s\n",str);
    return 0;
}