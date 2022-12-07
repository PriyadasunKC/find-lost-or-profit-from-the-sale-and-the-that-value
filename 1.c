#include <stdio.h>

int lossOrProfit();

int main()
{
    lossOrProfit();
    return 0;
}

int lossOrProfit()
{
    double itemCost = 0;
    double sellingPrice = 0;
    double cal = 0;

    printf("Enter Item Cost Rs. : ");
    scanf("%lf", &itemCost);
    printf("Enter Selling Price : ");
    scanf("%lf", &sellingPrice);

    cal = sellingPrice - itemCost;

    if (cal >= 0)
    {
        printf("You made profit from the sale \nprofit : Rs.%.2lf", cal);
    }
    else
    {
        printf("You made lost from the sale!\nlost : Rs.%.2lf", -1 * cal);
    }
}