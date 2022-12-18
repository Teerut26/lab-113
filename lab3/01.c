#include <stdio.h>
#include <stdlib.h>

int main(){
    // 20 % 8
    // 20 % 8 = 4
    // 8 % 4 = 0
    // 4 % 0
    // long long
    char n_str[10];
    int n  = 0;
    fgets(n_str,10,stdin);
    n = atoi(n_str);

    for (int i = n;i >= 0; i--){
        printf("%d\n",i);
    }

    return 0;
}