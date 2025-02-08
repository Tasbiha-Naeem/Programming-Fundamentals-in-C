#include<stdio.h>
int main(){
	int pin;
	int balance=5000;
	int deposit_money;
	int withdraw_money;
	int predefined_pin=17783;
	printf("Enter the pin:\n");
	scanf("%d",&pin);
	if(pin==predefined_pin){
		printf("------Menu------\n");
		printf("1.Check balance.\n");
		printf("2.Deposit Money.\n");
		printf("3.Withdraw Money.\n");
		printf("4.Exit.\n");
		int choice;
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		    if(choice==1){
			printf("Your current balance is:%d.\n",balance);
		}
	        else if(choice==2){
	        	printf("Enter the amount of money you want to deposit.\n");
	        	scanf("%d",&deposit_money);
	        	if(deposit_money<=0){
	        		printf("Invalid amount.");
				}
				else{
					balance+=deposit_money;
					printf("The amount %d deposit successfully.New balance is %d.",deposit_money,balance);
				}
			}
			else if(choice==3){
				printf("Enter the amount of money you want to withdraw.\n");
				scanf("%d",&withdraw_money);
				if(withdraw_money<=0){
					printf("Invalid withdraw amount.\n");
				}
				else if(withdraw_money>balance){
					printf("Sorry,the withdraw money is greater than the initial balance you have in your account.\n");
				}
				else{
					balance-=withdraw_money;
					printf("Withdraw successfully.New balance is %d.\n",balance);
				}
			}
			else if(choice==4){
				printf("The program has terminated.\n");
				return 0;
			}
			else{
				printf("Invalid choice.\n");
			}
		}
		else{
			printf("Incorrect pin.\n");
		}
		
	return 0;
}
