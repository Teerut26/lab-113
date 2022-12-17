#include <stdio.h>
#include <stdlib.h>

int main() {
    char a_str[20], b_str[20];
    int a, b, nth, gcd;

    fgets(a_str, 20, stdin);
    fgets(b_str, 20, stdin);

    a = atoi(a_str);
    b = atoi(b_str);

    while (b != 0) {
        nth = a % b;
        a = b;
        b = nth;
    }

    gcd = a;

    if ((atoi(b_str) / gcd) == 1) {
        printf("= %d\n", atoi(a_str) / gcd);
    } else {
        printf("= %d/%d\n", atoi(a_str) / gcd, atoi(b_str) / gcd);
    }

    return 0;
}
