/*Write a program to take range from user (starting number and ending number), count 
the number fizz, Buzz and Fizz-Buzz, in the given range
Fizz In Multiple of 3
Buzz is Multiple of 5
Fizz-Buzz is Multiple of 3 and 5
Input: start = 1; end = 15
Output 
Fizz =5
Buzz = 3
Fizz-Buzz = 1*/
#include<stdio.h>
int main(){
    int starting_number;
    int ending_number;
    int fizz = 0;
    int buzz = 0;
    int fizz_buzz = 0;

    printf("Enter the starting number:\n");
    scanf("%d",&starting_number);
    printf("Enter the ending number:\n");
    scanf("%d",&ending_number);

    for(int i=starting_number;i<=ending_number;i++){
        if(i%3==0 && i%5==0){
            fizz_buzz++;
        }
        if(i%3==0){
            fizz++;
        }
        if(i%5==0){
            buzz++;
        }
    }
    printf("Fizz=%d\n",fizz);
    printf("Buzz=%d\n",buzz);
    printf("Fizz-Buzz=%d\n",fizz_buzz);
    return 0;
}
