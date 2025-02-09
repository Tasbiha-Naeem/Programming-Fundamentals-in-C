#include <stdio.h>
int main(){
    int start,end,sum=0;

    printf("Enter the start number:\n");
    scanf("%d",&start);
    printf("Enter the end number:\n");
    scanf("%d",&end);

    if(start<2){
       start=2;
    }

    while(start<=end){
        int count=0;
        int i=1;
        while(i<=start){ 
            if (start%i==0){
                count++;
            }
            i++;
        }

        if(count==2) { 
            sum += start;
        }
        start++; 
    }

    printf("Sum of prime numbers: %d\n", sum);
    return 0;
}
