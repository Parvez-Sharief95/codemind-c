#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    begin:
    int s=0;
    while(n>0)
    {
        r=n%10;
        n/=10;
        s=s+r;
    }
    n=s;
    if(s<10)
    {
        printf("%d",s);
    }
    else
    {
        goto begin;
    }
}