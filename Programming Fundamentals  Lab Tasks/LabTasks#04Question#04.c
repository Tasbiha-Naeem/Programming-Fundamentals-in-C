#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	log10(number);
	printf("%d",(number>0 && floor(log10(number))==log10(number)));
	return 0;
}