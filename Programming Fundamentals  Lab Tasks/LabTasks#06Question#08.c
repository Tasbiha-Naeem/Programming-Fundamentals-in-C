/*Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21*/
#include<stdio.h>
#include<climits>
int main(){
	int maximum_element=INT_MIN;
	int minimum_element=INT_MAX;
	int arr[10];
	printf("Enter the elements of array:\n");
	for(int i=0;i<10;i++){
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
    for(int i=0;i<10;i++){
    	if(maximum_element<arr[i]){
    		maximum_element=arr[i];
		}
	}
	for(int i=0;i<10;i++){
		if(minimum_element>arr[i]){
			minimum_element=arr[i];
		}
	}
	printf("The maximum element of array is %d.\n",maximum_element);
	printf("The minimum element of array is %d.",minimum_element);
	return 0;
}
