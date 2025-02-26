#include<stdio.h>
int main(){
	int choice;
	printf("Press 1 for printing pyramid.\n");
	printf("Press 2 for printing triangle.\n");
	printf("Press 3 for printing diamond.\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
		int r1;
	    printf("Enter the number of rows:\n");
	    scanf("%d",&r1);
	    int a=1;
	    for(int i=1;i<=r1;i++){
		for(int j=1;j<=r1-i;j++){
		printf(" ");
		}
		for(int k=1;k<=a;k++){
			printf("*");
		}
		a=a+2;
		printf("\n");
	    }
		break;
		}
		case 2:{
		int r2;
	    printf("Enter the number of rows:\n");
	    scanf("%d",&r2);
        for(int i=1;i<=r2;i++){
    	for(int j=1;j<=i;j++){
    		printf("*");
		}
		printf("\n");
	    }
		break;
	     }
		case 3:
			{
			int r3;
			printf("Enter the number of rows:\n");
			scanf("%d",&r3);
			int nsp=r3/2;
			int nst=1;
			int middle_line=(r3/2+1);
			for(int i=1;i<=r3;i++){
				for(int j=1;j<=nsp;j++){
					printf(" ");
				}
				for(int j=1;j<=nst;j++){
					printf("*");
				}
				if(i<middle_line){
					nsp--;
					nst+=2;
				}
				else{
					nsp++;
					nst-=2;
				}
				printf("\n");
			}
			break;
		}
		default:
	    {
		printf("Invalid choice.\n");
   	}
	}
	return 0;
}
