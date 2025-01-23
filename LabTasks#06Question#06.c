/*Write a C Program that takes a user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45*/
#include<stdio.h>
int main(){
	int arr[9];
	printf("Enter the elements of array:\n");
	int sum=0;
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<9;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=1;i<=9;i++){
		sum+=arr[i];
	}
	printf("The sum of an array is %d.",sum);
	return 0;
}
