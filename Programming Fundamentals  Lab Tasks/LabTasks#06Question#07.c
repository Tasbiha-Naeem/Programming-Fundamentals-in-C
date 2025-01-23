/*Write a program in C to read n number of values in an array and display it in reverse
order.
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1*/
#include<stdio.h>
int main(){
	int arr[9];
	printf("Enter the elements of array:\n");
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<9;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Reverse Array:\n");
	int j=9-1;
	for(int i=j;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
