#include<stdio.h>
int main()
{
    int n,r,s=0,x;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        x/=10;
        s=s*10+r;
    }
    printf("%d",s);
}