#include<stdio.h>
int main()
{
    int n,r,s=0,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q/=10;
        s=s*10+r;
    }
    printf("%d",s);
}