#include<stdio.h>
int main(){
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);
	(year%4==0 && (year%100!=0 || year%400==0))?printf("leap year"):printf("Not a leap year");
	return 0;
}
