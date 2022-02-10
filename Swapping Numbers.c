#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    printf("X = %d and Y = %d \n\n",x,y);
    x = x + y; 
    y = x - y; 
    x = x - y; 
    printf("After Swapping the numbers x = %d, y = %d",x,y);
    return(0);
}
