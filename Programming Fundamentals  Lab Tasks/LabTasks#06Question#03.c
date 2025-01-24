/*Write a C Program to compute the LCM and GCD of two numbers.
LCM is a number which is divisible by both a and b
GCD -> Greatest common divisor*/
#include<stdio.h>
int main(){
	int a,b,lcm,gcd;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	for(lcm=1;lcm<=a*b;lcm++){
		if(lcm%a==0 && lcm%b==0){
			break;
		}
	}
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	printf("LCM:%d\n",lcm);
	printf("GCD:%d",gcd);
	return 0;
}
