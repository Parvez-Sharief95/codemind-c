#include<stdio.h>
int main()
{
    int n,c=0,c1=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    printf("%d %d",c,c1);
}