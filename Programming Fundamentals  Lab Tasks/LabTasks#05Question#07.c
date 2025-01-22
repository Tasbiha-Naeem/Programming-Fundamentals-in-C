/*Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank customer&#39;s
mortgage. For each customer, the following facts are available: 
a) the account number
b) the mortgage amount 
c) the mortgage term
d) the interest rate
The program should input each fact, calculate the
total interest payable (= mortgage amount × interest rate × mortgage term), and add it to the
mortgage amount to get the total amount payable. It should calculate the required monthly payment by
dividing the total amount payable by the number of months in the mortgage term. The program should
display the required monthly payment rounded off to the nearest dollar. The program should process each
customer&#39;s account at a time. Here is a sample input/ output dialog:
Enter account number (-1 to end): 100
Enter mortgage amount (in dollars): 6500
Enter mortgage term (in years): 3
Enter interest rate (as a decimal): 0.075
The monthly payable interest $ 221
Enter account number (-1 to end): 200
Enter mortgage amount (in dollars): 12000
Enter mortgage term (in years): 10
Enter interest rate (as a decimal): 0.045
The monthly payable interest is: $ 145
Enter account number (-1 to end): -1*/
#include<stdio.h>
#include<math.h>
int main(){
	int account_number;
	float mortgage_amount;
	int mortgage_term;
	float interest_rate;
	printf("Enter the account number:\n");
	scanf("%d",&account_number);
	while(account_number!=-1){
		printf("Enter the mortgage amount:\n");
		scanf("%f",&mortgage_amount);
		printf("Enter the mortgage term:\n");
		scanf("%d",&mortgage_term);
		printf("Enter the interest rate:\n");
		scanf("%f",&interest_rate);
		float total_interest_payable=mortgage_amount*mortgage_term*interest_rate;
		float total_amount_payable=total_interest_payable+mortgage_amount;
		int month=mortgage_term*12;
		float monthly_payment=total_amount_payable/month;
		monthly_payment=round(monthly_payment);
		printf("The monthly payable interest is $%.0f\n",monthly_payment);
		printf("Enter account number(-1 to end):\n");
		scanf("%d",&account_number);
	}
	printf("Program terminated.\n");
	return 0;
}
