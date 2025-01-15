/*Write a C program to take a positive number as input and multiply it by 4 using only
bitwise operators. (No loops allowed either).*/
#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	int result=number<<2;
	printf("The result after multiply the number by 4 is:%d",result);
	return 0;
}