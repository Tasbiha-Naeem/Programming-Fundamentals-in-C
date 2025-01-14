/*Calculate the volume of a cone, using FLOAT data type for all values and output the final answer up to 3 
decimal places exactly.*/
#include<stdio.h>
int main(){
	float pie=3.14,radius,height,volume_of_cone;
	printf("Enter the radius:\n");
	scanf("%f",&radius);
	printf("Enter the height:\n");
	scanf("%f",&height);
	volume_of_cone=0.3*(radius*radius*height);
	printf("Volume of cone:%.3f",volume_of_cone);
	return 0;
}