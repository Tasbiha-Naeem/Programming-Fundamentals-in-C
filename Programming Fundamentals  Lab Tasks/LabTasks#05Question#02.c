/*There are 2 wolves and 1 sheep in a line. Both wolves will attempt to eat the 
sheep. You are supposed to find out which wolf will reach the sheep and eat it, 
assuming both wolves move at the same speed and the sheep does not move. 
Take as input the positions of wolf A, wolf B and the sheep on the line (xcoordinate) and find out which wolf will reach the sheep first and eat it.
If Wolf A reaches the sheep first, print “Wolf A”
If Wolf B reaches the sheep first, print “Wolf B”
If both wolves reach the sheep at the same time, the wolves will get distracted 
and fail to eat the sheep, so print “Wolves distracted, Sheep escaped”
Example: Wolf A pos = 3, Wolf B pos = 7, Sheep pos = 4. Wolf A will reach the 
sheep quicker than Wolf B so it will eat the sheep, program should print “Wolf A”*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int pos_wolf_A,pos_wolf_B,pos_of_sheep;
	int distance_of_wolfA_from_sheep,distance_of_wolfB_from_sheep;
	printf("Enter the position of wolf A:\n");
	scanf("%d",&pos_wolf_A);
	printf("Enter the position of wolf B:\n");
	scanf("%d",&pos_wolf_B);
	printf("Enter the position of sheep:\n");
	scanf("%d",&pos_of_sheep);
	distance_of_wolfA_from_sheep=abs(pos_of_sheep-pos_wolf_A);
	distance_of_wolfB_from_sheep=abs(pos_of_sheep-pos_wolf_B);
	if(distance_of_wolfA_from_sheep<distance_of_wolfB_from_sheep){
		printf("Wolf A");
	}
	else if(distance_of_wolfA_from_sheep==distance_of_wolfB_from_sheep){
		printf("Wolves distracted,Sheep escaped");
	}
	else{
		printf("Wolf B");
		}
	return 0;
}
