#include<stdio.h>
int main(){
	int first_number;
	int second_number;
	printf("Enter the first number:\n");
	scanf("%d",&first_number);
	printf("Enter the second_number:\n");
	scanf("%d",&second_number);
	if(first_number>second_number){
		printf("First number=%d is greater than second number=%d.\n",first_number,second_number);
	}
	else if(first_number==second_number){
		printf("First number=%d is equal to second number=%d.\n",first_number,second_number);
	}
	else{
		printf("First number=%d is smaller than the second number=%d.\n",first_number,second_number);
	}
	return 0;
}
