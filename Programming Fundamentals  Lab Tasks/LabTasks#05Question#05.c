/*Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table
details the time chart for the machine for each coffee type. Display a statement for each step. If the
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the
user and to compute the coffee time.*/
#include<stdio.h>
void displayInstructions(){
    printf("Welcome to the Coffee Machine!\n");
    printf("Enter 'B' for Black Coffee or 'W' for White Coffee.\n");
    printf("Enter 'Y' if you want a double size cup or 'N' for regular size.\n");
    printf("Enter 'Y' if the coffee is manual or 'N' otherwise.\n");
}
void computeCoffeeTime(char coffeeType, char isDoubleSize,char isManual) {
    int totalTime = 0;
    printf("Starting preparation...\n");
    switch (coffeeType){
        case 'B':
        case 'b':
            printf("Step 1: Put Water (20 mins)\n");
            totalTime += 20;
            printf("Step 2: Add Sugar (20 mins)\n");
            totalTime += 20;
            printf("Step 3: Mix Well (25 mins)\n");
            totalTime += 25;
            printf("Step 4: Add Coffee (15 mins)\n");
            totalTime += 15;
            printf("Step 5: Mix Well Again (25 mins)\n");
            totalTime += 25;
            break;
        case 'W':
        case 'w':
            printf("Step 1: Put Water (15 mins)\n");
            totalTime += 15;
            printf("Step 2: Add Sugar (15 mins)\n");
            totalTime += 15;
            printf("Step 3: Mix Well (20 mins)\n");
            totalTime += 20;
            printf("Step 4: Add Coffee (2 mins)\n");
            totalTime += 2;
            printf("Step 5: Add Milk (4 mins)\n");
            totalTime += 4;
            printf("Step 6: Mix Well Again (20 mins)\n");
            totalTime += 20;
            break;
        default:
            printf("Invalid coffee type!\n");
            return;
    }
    if (isDoubleSize == 'Y' || isDoubleSize == 'y') {
        totalTime = totalTime + (totalTime / 2);
        printf("Double size selected. Adjusting preparation time...\n");
    }
    if (isManual=='Y' || isManual=='y'){
        printf("Manual preparation selected. Follow these steps manually:\n");
        printf("1. Heat water to the required temperature.\n");
        printf("2. Add sugar, coffee, and milk as per the steps.\n");
        printf("3. Stir and mix well manually.\n");
    } else {
        printf("Using automatic machine settings for preparation.\n");
    }

    printf("Total coffee preparation time: %d minutes.\n", totalTime);
    printf("Your coffee will be ready shortly. Enjoy!\n");
}
int main(){
    char coffeeType,isDoubleSize,isManual;
    displayInstructions();
    printf("Enter coffee type (B for Black, W for White): ");
    scanf(" %c",&coffeeType);
    printf("Is the cup size double? (Y/N): ");
    scanf(" %c",&isDoubleSize);
    printf("Is the coffee manual? (Y/N): ");
    scanf(" %c",&isManual);
    computeCoffeeTime(coffeeType, isDoubleSize,isManual);
    return 0;
}
