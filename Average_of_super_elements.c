#include<stdio.h>
int main()
{
    int n,i,j;
    float res=0,s=0,c=0;
    scanf("%d",&n);
    int  a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=0,x=a[i];
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
        if(t==x)
        {
            s+=a[i];
            c++;
            a[i]=0;
        }
    }
    if(c==0)
    {
        printf("%d",-1);
    }
    else
    {
        res=s/c;
        printf("%.2f",res);
    }
}