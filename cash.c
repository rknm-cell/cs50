#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int change = 0;
    while(change < 1)
    {
        change = get_int("Change owed: ");

    }
        if (change >= 25){
            quarters = change / 25;
            change = change % 25;
            printf("%d Quarters", quarters);
            printf("\n");
        }
        if (change >= 10){
            dimes = change / 10;
            change = change % 10;
            printf("%d Dimes", dimes);
            printf("\n");
        }
        if (change >= 5){
            nickels = change / 5;
            change = change % 5;
            printf("%d Nickels", nickels);
            printf("\n");
        }
        if (change >= 1){
            pennies = change / 1;
            change = change % 1;
            printf("%d Pennies", pennies);
            printf("\n");
        }



}
