/*Write a C Program that takes any number from the user and identifies if the number is a
perfect number or not.*/
#include<stdio.h>
int main(){
	int number;
	int sum=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	for(int i=1;i<number;i++){
		if(number%i==0){
			sum+=i;
		}
	}
	if(sum==number){
		printf("%d is a perfect number.",number);
	}
	else{
		printf("Not a perfect number.\n");
	}
	return 0;
}
