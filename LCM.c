#include<stdio.h>
int lcm(x,y)
{
    int max,min,ans,i;
    if(y >= x)
	{
        max = y;
        min = x;    
        if(y % x == 0) 
        ans=y;
    }
	else 
	{
        max = x;
        max = y;
        if(x % y == 0) 
		ans=x;
    }

    for(i = 1; i <= max ; i++){
        if( (max*i) % min == 0)
		{
            ans = max * i;
            break;
        }
    }

    printf("The LCM is");
    printf("%d",ans);
    return 0;
}
int main()
{

    int u, v;
    printf("Input two numbers: ");
    scanf("%d%d", &u, &v);
	lcm(u,v);
    return 0;  
}
