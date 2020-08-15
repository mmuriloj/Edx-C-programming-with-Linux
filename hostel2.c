/*The hostel in which you stop for the night changes 
its prices according to the age of the customer and 
the weight of their luggage. The rules are not very 
clear, so you decide to write a small program that 
will easily allow you and your travel companions to 
know the price of one night.

One room costs nothing if you are 60 (the age of the
innkeeper), or 5 dollars if you are less than 10 years
old. For everyone else, the cost is 30 dollars plus an 
additional 10 dollars if you bring more than 20 pounds 
of luggage. Your program should read the customer's age 
first, then the weight of their luggage, then output the 
price they have to pay.*/

#include <stdio.h>

int main(void){
    int age, luggageWeight, price;
    
    scanf("%d %d", &age, &luggageWeight);

    if(age == 60){
        price = 0;
    }else if(age < 10){
        price = 5;
    }else {
        if(age >=10 && luggageWeight > 20){
        price = 30 + 10;}
        else{
            price = 30;
        }
    }

    printf("%d\n", price);

    return 0;
}