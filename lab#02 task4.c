#include<stdio.h>
int main(){
	int number1;
	int number2;
	char operation;
	printf("Enter the number:\n");
	scanf("%d",&number1);
	printf("Enter the number:\n");
	scanf("%d",&number2);
	printf("Enter the operation:\n");
	scanf(" %c",&operation);
	switch(operation){
		case '+':
		printf("The sum of %d and %d is:%d\n",number1,number2,number1+number2);
		break;
		case '-':
		printf("The difference of %d and %d is %d:\n",number1,number2,number1-number2);
		break;
		case '*':
		printf("The product of %d and %d is %d:\n",number1,number2,number1*number2);
		break;
		case '/':
		printf("The quotient of %d and %d is %d:\n",number1,number2,number1/number2);
		break;
	}
	return 0;
}
