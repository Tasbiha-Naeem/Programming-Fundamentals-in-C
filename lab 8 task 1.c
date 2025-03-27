#include<stdio.h>
int main(){
	int arr[10];
	int search_number;
	int count=0;
	printf("Enter the 10 numbers:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the search number:\n");
	scanf("%d",&search_number);
	for(int i=0;i<10;i++){
		if(arr[i]==search_number){
			count++;
		}
	}
	if(count==0){
		printf("Number not found.");
	}
	else{
		printf("The number occured %d times.",count);
	}
	return 0;
}
