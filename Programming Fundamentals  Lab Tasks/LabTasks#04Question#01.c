/*1. Ali went to visit his grandmother in USA and she gave him 368 pennies as a gift.
Carrying so many coins would be a hassle, so Ali wishes to convert the 368 pennies
into a better format. Write a C program which converts the 368 pennies into a set of
pennies, nickels, dimes, and quarters such that Ali has to carry the least amount of
coins.
 1 quarter = 25 pennies
 1 dime = 10 pennies
 1 nickel = 5 pennies*/
#include<stdio.h>
int main(){
	int pennis=368;
	int quarter;
	int dime;
	int nickel;
	int remaining_pennis;
    quarter=pennis/25;
	pennis=pennis%25;
	dime=pennis/10;
	pennis=pennis%10;
	nickel=pennis/5;
	remaining_pennis=pennis%5;
	printf("368 pennis in quarter:%d\n",quarter);
	printf("368 pennis in dime:%d\n",dime);
	printf("368 pennis in nickel:%d\n",nickel);
	printf("Remaining pennis:%d",remaining_pennis);
	return 0;
}