#include<stdio.h>
int main(){
	float celsius;
	float fareinheit;
	printf("Enter the temperature in celsius:\n");
	scanf("%f",&celsius);
	fareinheit=(celsius*9/5)+32;
	printf("Temperature in celsius:%.2f C\n",celsius);
	printf("Temperature in farenheit:%.2f F\n",fareinheit);
	return 0;	
}
