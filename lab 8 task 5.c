#include<stdio.h>
int main(){
	float km_battery,km_fuel,total_km=0;
	int battery_count=0;
	int fuel_price;
	float fuel_cost,fuel_used;
	printf("Enter the first three digit of your id:\n");
	scanf("%d",&fuel_price);
	while(1){
		printf("Enter KM driven under 40 KM/h (Battery):");
		scanf("%f",&km_battery);
		printf("Enter KM driven over 40 KM/h (fuel):");
		scanf("%f",&km_fuel);
		
		total_km+=km_battery+km_fuel;
		
		battery_count+=(int)(km_battery/30);
		
		fuel_used=(km_fuel/15);
		fuel_cost=fuel_used*fuel_price;
		
		printf("\n--- Travel Summary ---\n");
        printf("Total KM driven: %.2f KM\n", total_km);
        printf("Total fuel used: %.2f L\n", fuel_used);
        printf("Total fuel cost: %.2f Rupees\n", fuel_cost);
        printf("Total batteries fully used: %d\n", battery_count);
		
		char choice;
		printf("Do you want to enter more data:(y,n)\n");
		scanf(" %c",&choice);
		if(choice=='n' || choice=='N'){
			break;
		}	
	}
	printf("Program terminated.");
	return 0;
}
