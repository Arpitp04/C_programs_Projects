#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your Marks : ");
    scanf("%d",&marks);
    if (marks>=85 && marks<=100)
    {
    	printf("\n GRADE A");
	}
	else if (marks>=70 && marks<=84)
    {
    	printf("\n GRADE B");
	}
	else if (marks>=55 && marks<=69)
    {
    	printf("\n GRADE C");
	}
	else if (marks>=40 && marks<=54)
    {
    	printf("\n GRADE D");
	}
	else if (marks<40)
    {
    	printf("\n GRADE F");
	}
	else 
	{
		printf("Enter marks out of 100 please");
	}
    return(0);
}
