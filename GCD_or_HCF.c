#include<stdio.h>
int main()
{
	int i,a,b,x,y,g;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	for(i=1;i<=y;i++)
	{
		if(x%i==0 && y%i==0)
		{
			g=i;
		}
	}
	printf("%d",g);
}