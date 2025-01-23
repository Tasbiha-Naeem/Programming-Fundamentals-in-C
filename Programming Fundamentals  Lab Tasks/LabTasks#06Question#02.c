/*Write a program that will generate the Fibonacci series up to 10000. Also find the sum of 
the generated Fibonacci numbers divisible by 3, 5 or 7 only. 
An example of the Fibonacci series is: 1 1 2 3 5 8 13 25..........
Note: Do this task by using a for loop DO NOT use arrays for this.*/
#include<stdio.h>
int main(){
	int n=1000;
	int a=1;
	int b=1;
	int sum=0;
	printf("%d\n",a);
	printf("%d\n",b);
	int totalsum=0;
	if (a%5==0 || a%3==0 || a%7==0) totalsum += a;
    if (b%5==0 || b%3==0 || b%7==0) totalsum += b;
	for(int i=1;i<=998;i++){
		sum=a+b;
		a=b;
		b=sum;
		printf("%d\n",sum);
	
	if (sum%5==0 || sum%3==0 || sum%7==0) {
            totalsum+=sum;
        }
    }
   printf("Total sum of Fibonacci numbers divisible by 5, 3, or 7: %d\n",totalsum);
   return 0;
}
