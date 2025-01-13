/*A car traveled for some hours. Take the number of Hours travelled as input on runtime, and then take
input for the Distance Travelled during this time, Calculate Average Speed and display it on the screen.*/
#include<stdio.h>
int main(){
	float Hours,Distance,Average_speed;
	printf("Enter the number of hours travelled:\n");
	scanf("%f",&Hours);
	printf("Enter the distance travelled:\n");
	scanf("%f",&Distance);
	Average_speed=Distance/Hours;
	printf("Average speed:%.2fkm/h",Average_speed);
	return 0;
}
