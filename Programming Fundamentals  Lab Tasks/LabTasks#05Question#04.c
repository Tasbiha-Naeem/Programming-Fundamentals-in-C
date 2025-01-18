/*Write a program in which user enters his NTS and F.Sc marks and your program 
will help student in selection of university. Based on these marks Student will be 
allocated a seat at different department of different university. 
 Oxford University 
IT: Above 70% in Fsc. and 70 % in NTS
Electronics: Above 70% in Fsc. and 60 % in NTS
Telecommunication Above 70% in Fsc. and 50 % in NTS
MIT
IT: 70% - 60 % in Fsc. and 50 % in NTS
Chemical: 59% – 50 % in Fsc. and 50 % in NTS
Computer: Above 40% and below 50 % in Fsc. and 50 % in NTS*/
#include<stdio.h>
int main(){
	int fsc_total_marks;
	int nts_total_marks;
	int fsc_obtained_marks;
	int nts_obtained_marks;
	float percentage_of_fsc;
	float aggregate_of_nts;
	printf("Enter the total marks of fsc:\n");
	scanf("%d",&fsc_total_marks);
	printf("Enter the obtained marks of fsc:\n");
	scanf("%d",&fsc_obtained_marks);
	printf("Enter the total marks of nts:\n");
	scanf("%d",&nts_total_marks);
	printf("Enter the obtained marks of nts:\n");
	scanf("%d",&nts_obtained_marks);
	
	percentage_of_fsc=(fsc_obtained_marks/(float)fsc_total_marks)*100;
	aggregate_of_nts=(nts_obtained_marks/(float)nts_total_marks)*100;
	
	printf("---Oxford University---");
	if(percentage_of_fsc>70 && aggregate_of_nts>=70){
		printf("Allocated:IT department\n");
	}
	else if(percentage_of_fsc>70 && aggregate_of_nts>=60){
		printf("Allocated:Electronic departmemt\n");
	}
	else if(percentage_of_fsc>70 && aggregate_of_nts>=50){
		printf("Allocated:Telecommunication department\n");
	}
	else{
		printf("Not eligible for Oxford university.");
	}
	printf("---MIT University---");
	if(percentage_of_fsc>=60 && percentage_of_fsc<=70 && aggregate_of_nts>=50){
		printf("Allocated:IT department");
	}
	else if(percentage_of_fsc>=50 && percentage_of_fsc<=59 && aggregate_of_nts>=50){
		printf("Allocated:Chemical department");
	}
	else if(percentage_of_fsc>=40 && percentage_of_fsc<50 && aggregate_of_nts>=50){
		printf("Allocated:Computer department");
	}
	else{
		printf("Not eligible for MIT university");
	}
	return 0;
}
