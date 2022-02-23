#include<stdio.h>  
int prime(n)
{    
	int i,m=0,flag=0;       
	m=n/2;
	for(i=2;i<=m;i++)    
	{    
		if(n%i==0)
		{
			printf(" is not prime");    
			flag=1;    
			break;    
		}	    
	}    
	if(flag==0)    
	printf(" is prime");     
	return 0;  
}   
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	prime(n);
	return 0;
}
