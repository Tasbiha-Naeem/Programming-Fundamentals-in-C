/*Write a C program that produces the following output:
0 0 0 0
  1 1
2 2 2 2
  3 3
4 4 4 4
  5 5
6 6 6 6
Note: Only use single loops (No Nested Loops*/
#include<stdio.h>
int main(){
    for (int i=0;i<7;i++){
        printf("%*d  %d",i%2==0?0:4,i,i);
        if(i%2==0){
            printf("  %d  %d",i,i);
        }
        printf("\n");
    }
    return 0;
}
