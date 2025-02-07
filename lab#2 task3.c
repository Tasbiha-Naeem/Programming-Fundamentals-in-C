#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	if(number%2==0){
		printf("The number you have entered is even.\n");
	}
	else{
		printf("The number you have entered is odd.\n");
	}
	return 0;
}
