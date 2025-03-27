#include<stdio.h>
int main(){
	int student[10];
	int highest_number=0;
	float total_sum=0;
	float average_number;
	int minimum_number=100;
	printf("Enter the marks of student`s:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&student[i]);
	}
	for(int i=0;i<10;i++){
		printf("The test score of student(%d) is %d\n",i+1,student[i]);
	}
	for(int i=0;i<10;i++){
		if(highest_number<student[i]){
			highest_number=student[i];
		}
		if(minimum_number>student[i]){
			minimum_number=student[i];
		}
	}
	for(int i=0;i<10;i++){
		total_sum+=student[i];
	}
	average_number=total_sum/10;
	printf("The highest number is %d\n",highest_number);
	printf("The average number is %.2f\n",average_number);
	printf("The minimum number is %d",minimum_number);
	return 0;
}
