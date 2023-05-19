#include<stdio.h>
int main()
{
    int n,r,s=0,sq=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        r=sq%10;
        sq/=10;
        s+=r;
    }
    if(s==n) printf("Neon Number");
    else printf("Not Neon Number");
}