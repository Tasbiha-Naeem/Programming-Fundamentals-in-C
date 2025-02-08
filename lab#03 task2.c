#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	if(number>0){
		printf("The number you have entered is positive.\n",number);
	}
	else if(number==0){
	   printf("The number you have entered is zero.\n",number);
	}
	else{
		printf("The number you have entered is negative.\n",number);
	}
	return 0;
}
