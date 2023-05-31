#include<stdio.h>
int main()
{
    int n,c,c1,count=0,t=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]==0)
            {
                c++;
            }
            if(a[j]==1)
            {
                c1++;
            }
            if(c==c1)
            {
                if(count<(c+c1))
                {
                    count=c+c1;
                    t=i;
                    p=j;
                }
            }
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",t,p);
    }
}