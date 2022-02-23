#include<stdio.h>
sum()
{
    int num,digit,sum=0;  
    scanf("%d",&num);
    while (num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;     
    }
    printf("%d",sum);
}
void main()
{
	printf("Enter Number: ");
	sum();
}
