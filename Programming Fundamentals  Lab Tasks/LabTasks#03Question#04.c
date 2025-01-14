/*A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from 
the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after 
paying the tax. Display the net income after tax deduction.*/
#include<stdio.h>
int main(){
	int tax_rate,salary,net_income;
	float tax;
	printf("Enter the tax rate(in percentage):\n");
	scanf("%d",&tax_rate);
	printf("Enter the salary:\n");
	scanf("%d",&salary);
	tax=salary*(tax_rate/100.0);
	net_income=salary-tax;
	printf("Net income:%d",net_income);
	return 0;
}