#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c,c1=0;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]<=b[j])
            {
                b[j]=0;
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}