#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}