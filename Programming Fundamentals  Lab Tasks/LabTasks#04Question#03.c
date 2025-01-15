/*Write a C program to calculate dot product of 2 vectors (A,B) where:
? A = (5,2,-3), B = (-4,9,2)
? Angle between A and B is 53 degrees*/
#include<stdio.h>
#include<math.h>
int main(){
	int a1,a2,a3,b1,b2,b3;
	int dot_product,theta=53;
	float angle;
	double m_pi=3.141592653589793;
	float magnitude_of_A,magnitude_of_B;
	printf("Enter the value of a1:\n");
	scanf("%d",&a1);
	printf("Enter the value of a2:\n");
	scanf("%d",&a2);
	printf("Enter the value of a3:\n");
	scanf("%d",&a3);
	printf("Enter the value of b1:\n");
	scanf("%d",&b1);
	printf("Enter the value of b2:\n");
	scanf("%d",&b2);
	printf("Enter the value of b3:\n");
	scanf("%d",&b3);
	dot_product=a1*b1+a2*b2+a3*b3;
	printf("The dot product of vector A and vector B is %d\n",dot_product);
	magnitude_of_A=sqrt(a1*a1+a2*a2+a3*a3);
	magnitude_of_B=sqrt(b1*b1+b2*b2+b3*b3);
	 if(magnitude_of_A==0||magnitude_of_B==0){
       printf("The angle cannot be determined because one of the vectors is zero.\n");
       return 0;
    }
    else{
    	angle=acos(dot_product/(magnitude_of_A*magnitude_of_B));
	    angle=angle*(180/m_pi);
	    printf("The angle between vector A and vector B is:%.2f",angle);
	}
	return 0;
}