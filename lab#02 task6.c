#include<stdio.h>
int main(){
    printf("----------Menu--------\n");
    printf("1.Press 1 for Dove shampoo.\n");
    printf("2.Press 2 for Dove soap.\n");
    printf("3.Press 3 for Dove cream.\n");

    int item;
    int quantity;
    int cart=0;  
    int cost_of_the_item=0;  

    printf("Enter the item:\n");
    scanf("%d",&item);

    switch(item){
        case 1:
            printf("Dove shampoo.\n");
            printf("Price:70$.\n");
            printf("Bar code:123882-783940.\n");
            printf("Enter the quantity:\n");
            scanf("%d",&quantity);
            cost_of_the_item=quantity*70;
            printf("Total cost of the item: %d$\n", cost_of_the_item);
            cart++;
            break;

        case 2:
            printf("Dove soap.\n");
            printf("Price:80$.\n");
            printf("Bar code:123777-009823\n");  
            printf("Enter the quantity:\n");
            scanf("%d",&quantity);
            cost_of_the_item=quantity*80;
            printf("Total cost of the item: %d$\n",cost_of_the_item);
            cart++;
            break;

        case 3:
            printf("Dove cream.\n");
            printf("Price:100$.\n");
            printf("Bar code:123665-007899\n"); 
            printf("Enter the quantity:\n");
            scanf("%d",&quantity);
            cost_of_the_item = quantity*100;
            printf("Total cost of the item: %d$\n",cost_of_the_item);
            cart++;
            break;

        default:
            printf("Invalid choice.\n");
    }

    int final_price;
    int discount_amount;
    if(cost_of_the_item>100){
        discount_amount=(10*cost_of_the_item)/100;  
        final_price = cost_of_the_item - discount_amount;
        printf("Final price of an item after discount is %d$.\n",final_price);
}else{
	printf("No discount.\n");
}
    return 0;
}
