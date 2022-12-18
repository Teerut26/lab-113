#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    int n1 = 1;
    int n2 = 1;
    int n3 = 0;
    
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        return n3;
    }
    
}

int main()
{

    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i = 0; i <= n; i++){
        printf("F(%d) = %d\n",i,fibo(i));
    }
    return 0;
}