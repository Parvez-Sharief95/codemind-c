#include<stdio.h>
int main()
{
    int n,sum=0,prd=1,r,s;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n/=10;
        sum=sum+r;
        prd=prd*r;
    }
    if(sum==prd)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}