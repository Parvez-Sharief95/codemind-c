#include<stdio.h>
int main()
{
    int n,r,s=0,d;
    scanf("%d",&n);
    d=n;
    while(d!=0)
    {
        r=d%10;
        d/=10;
        s=s*10+r;
    }
    printf("%d",s);
}