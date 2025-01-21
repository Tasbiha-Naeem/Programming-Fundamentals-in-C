/*Using IF and Switch statement, write a program that displays the following menu for the food items
available to take order from the customer:
∙ B= Burger (Rs. 200)
∙ F= French Fries (Rs. 50)
∙ P= Pizza (Rs. 500)
∙ S= Sandwiches (Rs. 150)
The costumer can order any combination of available food. The program first ask to enter the no of
types of snacks i.e. 2, 3 or 4 then it ask to enter the choice i.e. B for Burger and then for quantity. The
program should finally display the total charges for the order.*/
#include<stdio.h>
int main(){
	printf("----Menu----\n");
	printf("Press B for Burger(Rs:200).\n");
	printf("Press F for French Fries(Rs:50).\n");
	printf("Press P for Pizza(Rs:500).\n");
	printf("Press S for sandwich(Rs:150).\n");
	char choice; 
	int no_of_snacks;
	int quantity;
	int amount=0;
	int total_charges=0;
	printf("Enter the no of types of snacks(1,2,3 or 4):\n");
	scanf("%d",&no_of_snacks);
	for( int i=0;i<no_of_snacks;i++){
	printf("Enter your choice %d:\n",i+1);
	scanf(" %c",&choice);
	printf("Enter the quantity:\n");
	scanf("%d",&quantity);
		switch(choice){
			case 'B':
			case'b':
			amount=200*quantity;
			break;
			case 'F':
			case 'f':
			amount=50*quantity;
			break;
			case 'P':
			case 'p':
			amount=500*quantity;
			break;
			case 'S':
			case 's':
			amount=150*quantity;
			break;
			default:
			printf("Invalid choice.Please enter the write choice:\n");
		}
		 total_charges+=amount;
	}
	printf("Total charges:%d",total_charges);
	return 0;
}
