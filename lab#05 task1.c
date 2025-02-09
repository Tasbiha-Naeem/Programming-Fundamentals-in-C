#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	if(number==0){
		printf("The factorial of 0 is 1.\n");
	}
	else if(number<0){
		printf("Factorial of a negative number does not exist.\n");
	}
	else{
		int factorial=1;
		for(int i=1;i<=number;i++){
			factorial*=i;
		}
		printf("The factorial of %d is %d",number,factorial);
	}
	return 0;
}
