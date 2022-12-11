#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sticker_amount_str[10], price_str[10];

    int sticker_amount, price;
    float percent_discount;

    fgets(sticker_amount_str, 10, stdin);
    fgets(price_str,10, stdin);

    sticker_amount = atof(sticker_amount_str);
    price = atof(price_str);

    percent_discount = 1;

    if (sticker_amount == 1)
    {
        percent_discount = 10;
        sticker_amount -= 1;
    }
    else if (sticker_amount == 2)
    {
        percent_discount = 15;
        sticker_amount -= 2;
    }
    else if (sticker_amount >= 3 && sticker_amount < 6)
    {
        percent_discount = 20;
        sticker_amount -= 3;
    }
    else if (sticker_amount >= 6 && sticker_amount < 9)
    {
        percent_discount = 30;
        sticker_amount -= 6;
    }
    else if (sticker_amount >= 9)
    {
        percent_discount = 40;
        sticker_amount -= 9;
    }

    float amount = 0;
    if (percent_discount == 1)
    {
        amount = price;
        percent_discount = 0;
    }
    else
    {
        amount = price - (price * (percent_discount / 100));
    }

    printf("You get %.0f percents discount.\n", percent_discount);
    printf("Total amount due is %.2f Baht.\n", amount);
    printf("And you have %d stickers left.", sticker_amount);

    return 0;
}