#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++){
		arr[i]=i;
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
			for(int j=1;j<=arr[i];j++){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
