/*Consider Two integers a and b taken as input from the user. Using Loops iterate the value of 
a till the value of b.
If the value of a<=9 the output should correspond to the English representation of the 
numbers i.e., 8=Eight, 9=Nine etc.
If the iteration exceeds 9 then the programs should print if the exceeded number is even or 
odd.
Example:
Input= 8,11
Output= Eight, Nine, Even, Odd*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two integers a and b:");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i<=9) {
            switch(i){
                case 1: printf("One\n"); break;
                case 2: printf("Two\n"); break;
                case 3: printf("Three\n"); break;
                case 4: printf("Four\n"); break;
                case 5: printf("Five\n"); break;
                case 6: printf("Six\n"); break;
                case 7: printf("Seven\n"); break;
                case 8: printf("Eight\n"); break;
                case 9: printf("Nine\n"); break;
                default: break;
            }
        }
        else{
            if(i%2==0){
                printf("Even\n");
            }else{
                printf("Odd\n");
            }
        }
    }
    return 0;
}
