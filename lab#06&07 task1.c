#include<stdio.h>
int main(){
	int number1,number2;
	int result;
	printf("Enter the number 1:\n");
	scanf("%d",&number1);
	printf("Enter the number 2:\n");
	scanf("%d",&number2);
	for(int i=number1;i<=number2;i++){
		for(int j=1;j<=10;j++){
			result=i*j;
			printf("%d*%d=%d\n",i,j,result);
		}
		printf("\n");
	}
	return 0;
}
