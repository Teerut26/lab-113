#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char pizza_size_char[5], pepperoni_str[5], cheese_str[5], mushroom_str[5];
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(pizza_size_char, 5, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 5, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 5, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 5, stdin);

    int pizza_size, is_pepperoni, is_cheese, is_mushroom;

    pizza_size = atoi(pizza_size_char);
    is_pepperoni = atoi(pepperoni_str);
    is_cheese = atoi(cheese_str);
    is_mushroom = atoi(mushroom_str);

    float size_list[3] = {10, 16, 20};

    double extracost = 0;

    if (is_pepperoni){
        extracost += 0.5;
    }
    if (is_cheese){
        extracost += 0.25;
    }
    if (is_mushroom)
    {
        extracost += 0.30;
    }
    

    const double fixedcost = 5;
    const double basecost = 2;

    double area = (M_PI * pow(size_list[pizza_size-1],2.0)) / 4;
    double cost = fixedcost + (basecost * area) + (extracost * area);
    double price = 1.5 * cost;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.");

    return 0;
}