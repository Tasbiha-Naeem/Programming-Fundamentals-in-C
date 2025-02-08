#include<stdio.h>
int main(){
	int choice1;
	char choice2;
	int radius;
	int side_length;
    float area;
    float volume;
	float pi=3.14;
	printf("Press 1 for circle.\n");
	printf("Press 2 for sphere.\n");
	printf("Press 3 for cube.\n");
	printf("Which shape you want to calculate the area or volume of:\n");
	scanf("%d",&choice1);
	printf("Press a for area.\n");
	printf("Press v for volume.\n");
	printf("What you want to calculate area or volume:\n");
	scanf(" %c",&choice2);
	switch(choice1){
		case 1:
			switch(choice2){
				case 'a':
				    printf("Enter the radius:\n");
			        scanf("%d",&radius);
					area=pi*radius*radius;
					printf("The area of a circle is %.2f.\n",area);
					break;
				case 'v':
				    printf("Enter the radius:\n");
			        scanf("%d",&radius);
				    volume=(4*pi*radius*radius*radius)/3;
				    printf("The volume of a circle is %.2f.\n",volume);
				    break;
			}
			break;
		case 2:
			switch(choice2){
				case 'a':
				printf("Enter the radius:\n");
		     	scanf("%d",&radius);
				area=4*pi*radius*radius;
				printf("The area of a sphere is %.2f.\n",area);
				break;
			    case 'v':
			    printf("Enter the radius:\n");
			    scanf("%d",&radius);
			    volume=(4*pi*radius*radius*radius)/3;
			    printf("The volume of a sphere is %.2f.\n",volume);
			    break;
			}
			break;
		case 3:
			switch(choice2){
				case 'a':
			printf("Enter the side length:\n");
			scanf("%d",&side_length);
				area=6*side_length*side_length;
				printf("The area of cube is %.2f.\n",area);
				break;
				case 'v':
			printf("Enter the side length:\n");
			scanf("%d",&side_length);
				volume=side_length*side_length*side_length;
				printf("The volume of cube is %.2f.\n",volume);
				break;
			}
			break;
		default:
			printf("Invalid choice.\n");		
	}
	return 0;
}
