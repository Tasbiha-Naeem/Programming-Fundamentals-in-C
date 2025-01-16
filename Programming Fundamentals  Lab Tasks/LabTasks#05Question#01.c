/*Write a C program to input a character from the user and check whether the 
given character is a small alphabet, capital alphabet, digit or special character, 
using if else*/
#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z'){   //65-90
		printf("The character you have entered is capital alphabet.");
	}
	else if(ch>='a' && ch<='z'){ //97-122
		printf("The character you have entered is small alphabet.");
	}
	else if(ch>='0' && ch<='9'){ //48-57
		printf("The character you have entered is a digit.");
	}
	else {
		printf("The character you have entered is special character.");
	}
	return 0;
}
