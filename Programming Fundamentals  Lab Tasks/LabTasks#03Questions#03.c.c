/*Write a C program that takes two integer values as input from the user. Then swap the values taken 
from the user and display the output of the variables. (Value of num1 should be stored in num2 and vice 
versa)*/
#include<stdio.h>
int main(){
	int num1,num2,temp;
	printf("Enter the value of num1:\n");
	scanf("%d",&num1);
	printf("Enter the value of num2:\n");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
        printf("The value of num1 after swapping is %d\n",num1);
        printf("The value of num2 after swapping is %d",num2);
        return 0;
}
