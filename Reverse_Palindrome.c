#include<stdio.h>
int main()
{
    int m,n,r,x,t,s;
    scanf("%d",&n);//n=95
    start:
    m=n;//m=154
    r=0;
    while(m>0)//154>0
    {
        r=r*10+m%10;//r=451
        m/=10;//m=1
    }
    s=r+n;//s=451+154=605
    t=s;//t=605
    x=0;
    while(t>0)//605>0
    {
        x=x*10+t%10;//x=506
        t/=10;//t=5
    }
    if(s==x)
    {
        printf("%d",s);
    }
    else
    {
        n=s;//s=154
        goto start;
    }
}