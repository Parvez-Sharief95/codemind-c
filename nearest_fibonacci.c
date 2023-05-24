#include<stdio.h>
int main()
{
    int i,n,n1,n2,n3,j,np,sp,d,e;
    scanf("%d",&n);
    for(i=n;i>=n-100;i--)
    {
    	n1=0;
        n2=1;
    	for(j=1;j<=i-2;j++)
    	{
            n3=n1+n2;
            if(n3==i)
            {
                np=n3;
                d=n-np;
                break;
            }
            else if(n3>i)
            {
            	break;
			}
            n1=n2;
            n2=n3;
        }
        if(n3==i)
        {
            break;
        }
    }
    for(i=n;i<=n+100;i++)
    {
    	n1=0;
        n2=1;
    	for(j=1;j<=i-2;j++)
    	{
            n3=n1+n2;
            if(n3==i)
            {
                sp=n3;
                e=sp-n;
                break;
            }
            else if(n3>i)
            {
            	break;
			}
            n1=n2;
            n2=n3;
        }
        if(n3==i)
        {
            break;
        }
    }
    if(d<e)
    {
    	printf("%d",np);
	}
	else if(d>e)
	{
		printf("%d",sp);
	}
	else
	{
		printf("%d %d",np,sp);
	}
}