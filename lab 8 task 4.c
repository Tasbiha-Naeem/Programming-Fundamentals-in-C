#include<stdio.h>
#define MAX_ACCOUNTS 100
int main(){
    char choice;
    int id[MAX_ACCOUNTS];
    float initial_balance[MAX_ACCOUNTS];
    int validity[MAX_ACCOUNTS];
    int minimum_validity=100000;
    float total_balance=0.0;
    int total_accounts=0;
    int total_id =0;

    do {
        printf("Do you want to create an account (Y/N/E): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'Y':
            case 'y': {
                if (total_accounts >= MAX_ACCOUNTS) {
                    printf("Maximum number of accounts reached! Cannot create more accounts.\n");
                    break;
                }

                printf("Enter the id: ");
                scanf("%d", &id[total_accounts]);
                printf("Enter the initial balance: ");
                scanf("%f", &initial_balance[total_accounts]);
                printf("Enter the validity (days): ");
                scanf("%d", &validity[total_accounts]);

                total_balance += initial_balance[total_accounts];
                total_accounts++;
                total_ids++;

                
                if (validity[total_accounts - 1] < minimum_validity) {
                    minimum_validity = validity[total_accounts - 1];
                }
                break;
            }

            case 'N':
            case 'n':
                printf("I will ask again.\n");
                break;

            case 'E':
            case 'e':
                printf("Exiting.......\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }

        while (getchar() != '\n'); // Clear input buffer

    } while (choice != 'E' && choice != 'e');

  
    printf("\nAccount Summary\n");
    printf("ID\tBalance\tValidity\n");

    for (int i = 0; i < total_accounts; i++) {
        printf("%d\t%.2f\t%d\n", id[i], initial_balance[i], validity[i]);
    }

    printf("Total IDs: %d\n", total_ids);
    printf("Total balance: %.2f\n", total_balance);

    if (total_ids > 0) {
        printf("Minimum validity: %d days.\n", minimum_validity);
    } else {
        printf("No accounts created.\n");
    }

    return 0;
}
