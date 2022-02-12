#include<stdio.h>
int main() 
{
	int order;
	printf(" 1.Pizza \t Rs.200 \n 2.Pav Bhaji \t Rs.150 \n 3.Tacos \t Rs.120 \n 4.Fries \t Rs.120 \n 5.Burrito \t Rs.160");
	printf("\n Enter Order item no.");
	scanf("%d",&order);
	switch (order) 
	{ 
		case 1: printf("Food item - Pizza \n Price - Rs 200");
			break;
		case 2: printf("Food item - Pav Bhaji \n Price - Rs 150");
			break; 
		case 3: printf("Food item - Tacos \n Price - Rs 120"); 
			break; 
		case 4: printf("Food item - Fries \n Price - Rs 120"); 
			break; 
		case 5: printf("Food item - Burrito \n Price - Rs 160"); 
			break; 
		default: printf("Choose from the menu items only");
	} 
	return 0;
}
 

