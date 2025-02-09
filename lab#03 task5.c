#include<stdio.h>
int main(){
	int predefined_password=67789;
	int password;
	int remove_books;
	int sub_choice;
	int maximum_books=500;
	int total_books=50;
	int add_books;
	int fine=50;
	int dues;
	int choice;
	printf("Enter your password:\n");
	scanf("%d",&password);
	if(password==predefined_password){
	printf("-------Menu------.\n");
	printf("1.Book management.\n");
	printf("2.Fine\n");
	printf("3.Exit.\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("-----Book Management-----.\n");
			printf("1.Add books.\n");
			printf("2.Remove books.\n");
			printf("3.Display number of books.\n");
			printf("Enter your choice:\n");
			scanf("%d",&sub_choice);
			switch(sub_choice){
				case 1:
					if(total_books<maximum_books){
						printf("Enter number of books you want to add:\n");
						scanf("%d",&add_books);
						total_books+=add_books;
						printf("The books added successfully,total books are %d.\n",total_books);
					}
				break;
				case 2:
					if(total_books>0){
						printf("How many books you want to remove:\n");
						scanf("%d",&remove_books);
						total_books-=remove_books;
						printf("Books removed successfully,total books are %d.\n",total_books);
					}
					else{
						printf("No books available to remove.\n");
					}
					break;	
				case 3:
					printf("Total number of books are %d.\n",total_books);
					break;
				default:
					printf("Invalid choice");
			}
		break;
		case 2:
			printf("Enter the number of dues you have:\n");
			scanf("%d",&dues);
			if(dues>0){
				fine*=dues;
				printf("You have to pay %d RS at the counter.\n",fine);
			}
			break;
		case 3:
			printf("The program has terminated.\n");
			return 0;
			break;
		default:
			printf("Invalid choice:\n");
	}
}
else{
	printf("Incorrect password.\n");
}
return 0;
}
