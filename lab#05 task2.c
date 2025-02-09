#include<stdio.h>
int main(){
int no_of_terms;
printf("Enter the no of terms:\n");
scanf("%d",&no_of_terms);
int a=1;
int b=1;
printf("%d ",a);
printf("%d ",b);
int count=0;
do{
   int temp=a+b;
   printf("%d ",temp);
   a=b;
   b=temp;
   count++;
}
while(count<=(no_of_terms-3));
return 0;
}
