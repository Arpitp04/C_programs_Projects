#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,sum=0;
	int *p=&arr;
	printf("ENTER elements of the 3x3 matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element (%d,%d):",i+1,j+1);
			scanf("%d",&arr[i][j]);
			//printf("\n");
		}
	}
	printf("The elements are: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//appointing pointer to each element of matrix
			p=&arr[i][j];
			printf("%d",*p);
		}
		printf("\n");
	}
	//for sum calculation
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum + arr[i][j];
			}
		}
	}
	printf("\n The sum of diagonals is:%d ",sum);
	return 0;
}

