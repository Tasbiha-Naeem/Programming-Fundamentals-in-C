#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	int original_number=number;
	int sum=0;
	while(number!=0){
	     int result=number%10; 
		 sum=sum*10;
		 sum=sum+result; 
		 number=number/10;
	}
	if(sum==original_number){
		printf("%d is a palindrome.",original_number);
	}
	else{
		printf("%d is not a palindrome.",original_number);
	}
	return 0;
}
