/*An online shopping store is offering discounts on items as part of an Eid sale. The discount policy is as follows:

If the total cost of shopping is 1999 or less, no discount is applied.
If the total cost of shopping is between 2000 and 4000 (inclusive), a 20% discount is applied.
If the total cost of shopping is between 4001 and 6000 (inclusive), a 30% discount is applied.
If the total cost of shopping exceeds 6000, a 50% discount is applied.
Write a program that:

Takes the total cost of shopping as input.
Calculates and prints:
The actual amount (before discount).
The saved amount (discount amount).
The amount after discount (final cost).*/
#include<stdio.h>
int main(){
	int total_cost_of_shopping;
	int actual_amount;
	int saved_amount=0;
	int discount_amount;
	int amount_after_discount;
  
	printf("Enter the cost of shopping:\n");
	scanf("%d",&total_cost_of_shopping);
	actual_amount=total_cost_of_shopping;
  
	if(total_cost_of_shopping<=1999){
		printf("No discount is applied.\n");
		
	}
	else if(total_cost_of_shopping>=2000 && total_cost_of_shopping<=4000){
		discount_amount=actual_amount*(20/100.0);
		
	}
	else if(total_cost_of_shopping>=4001 && total_cost_of_shopping<=6000){
		discount_amount=actual_amount*(30/100.0);
	}
	else{
		discount_amount=actual_amount*(50/100.0);
	}

  
	saved_amount=discount_amount;
	amount_after_discount=actual_amount-discount_amount;
	
	
	if(actual_amount<=1999){
		saved_amount=0;
	printf("Actual amount=%d\n",actual_amount);
	printf("Saved amount=%d\n",saved_amount);
	}
	else{
	printf("Actual amount=%d\n",actual_amount);
	printf("Saved amount=%d\n",saved_amount);
	printf("Amount after discount=%d\n",amount_after_discount);
	}
	
	
	return 0;
}
