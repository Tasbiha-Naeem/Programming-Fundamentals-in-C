//Find both roots of the quadratic equation using the formula, after taking a, b, c as inputs.
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,root1,root2,discriminant;
	printf("Enter the value of a:\n");
	scanf("%f",&a);
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	printf("Enter the value of c:\n");
	scanf("%f",&c);
	discriminant=b*b-4*a*c;
	root1=(-b+sqrt(discriminant))/(2*a);
	root2=(-b-sqrt(discriminant))/(2*a);
	printf("Root 1:%.0f\n",root1);
	printf("Root 2:%.0f",root2);
	return 0;
}