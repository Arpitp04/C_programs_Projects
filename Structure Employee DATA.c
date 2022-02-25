#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char empname[30],department[30];
    int empno;
    float salary;
} employee;
 
int main()
{
    int n,i;
    printf("Enter the number of employee (between 1 to 20): ");
    scanf("%d",&n);
    employee abc[n];
    printf("Enter Employees DATA \n",n);
    for(i=0; i<n; i++)
	{
        printf("Employee %d : \n",i+1);
        printf("Name: ");
        scanf("%s",&abc[i].empname);
        printf("Employee Number: ");
        scanf("%d",&abc[i].empno);
        printf("Department: ");
        scanf("%s",&abc[i].department);
        printf("Salary: ");
        scanf("%f",&abc[i].salary);
        printf("\n");
    }
 
    printf(" -------Employees Data ----------\n");
    for(i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",abc[i].empname);
 
        printf("Employee Number \t: ");
        printf("%d \n",abc[i].empno);
        
        printf("Department \t: ");
        printf("%d \n",abc[i].department);
 
        printf("Salary \t: ");
        printf("%.f \n",abc[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
