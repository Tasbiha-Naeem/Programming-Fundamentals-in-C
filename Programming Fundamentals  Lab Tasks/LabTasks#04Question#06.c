/*Write a C program to take a positive number as input and multiply it by 13 without
using the * operator. (No loops allowed either).*/
//<<->left operator *2
//>>->right operator /2
#include<stdio.h>
int main(){
	int number,result;
	printf("Enter the number:\n");
	scanf("%d",&number);
	result=(number<<3)+(number<<2)+number;
	printf("The result after multiplying number by 13 without using multiplication operator is:%d",result);
	return 0;	
	
}