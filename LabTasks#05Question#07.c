/*Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table
details the time chart for the machine for each coffee type. Display a statement for each step. If the
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the
user and to compute the coffee time.

Note: Use switch structure to solve this problem.*/
#include<stdio.h>
void displayInstructions(){
    printf("Welcome to the Coffee Machine!\n");
    printf("Enter 'B' for Black Coffee or 'W' for White Coffee.\n");
    printf("Enter 'Y' if you want a double size cup or 'N' for regular size.\n");
    printf("Enter 'Y' if the coffee is manual or 'N' otherwise.\n");
}
void computeCoffeeTime(char coffeeType, char isDoubleSize, char isManual){
    int baseTime = 0; 
    switch (coffeeType){
        case 'B':
        case 'b':
            baseTime = 5;
            printf("Preparing Black Coffee...\n");
            break;
        case 'W':
        case 'w':
            baseTime = 7;
            printf("Preparing White Coffee...\n");
            break;
        default:
            printf("Invalid coffee type!\n");
            return;
    }
    if (isDoubleSize=='Y'||isDoubleSize=='y'){
        baseTime=baseTime+(baseTime/2); 
        printf("Double size selected. Adjusting preparation time...\n");
    }
    if (isManual=='Y' || isManual=='y'){
        printf("Manual preparation selected. Follow the instructions below:\n");
        printf("1. Heat water to the required temperature.\n");
        printf("2. Add coffee grounds as per your preference.\n");
        printf("3. Stir and brew manually.\n");
    }else {
        printf("Using automatic machine settings for preparation.\n");
    }
    printf("Coffee preparation time: %d minutes.\n",baseTime);
    printf("Your coffee will be ready shortly. Enjoy!\n");
}
int main(){
    char coffeeType,isDoubleSize,isManual;
    displayInstructions();
    printf("Enter coffee type (B for Black, W for White):");
    scanf(" %c",&coffeeType);
    printf("Is the cup size double? (Y/N):");
    scanf(" %c",&isDoubleSize);
    printf("Is the coffee manual? (Y/N):");
    scanf(" %c",&isManual);
    computeCoffeeTime(coffeeType, isDoubleSize, isManual);
    return 0;
}
