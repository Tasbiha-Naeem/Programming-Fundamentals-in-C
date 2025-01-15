#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	float distance;
	printf("Enter the value of x1:\n");
	scanf("%d",&x1);
	printf("Enter the value of x2:\n");
	scanf("%d",&x2);
	printf("Enter the value of y1:\n");
	scanf("%d",&y1);
	printf("Enter the value of y2:\n");
	scanf("%d",&y2);
	distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Distance=%.2f",distance);
	return 0;
}