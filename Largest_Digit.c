#include<stdio.h>
int main()
{
    int n,r,ld=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n/=10;
        if(ld<r)
        {
            ld=r;
        }
    }
    printf("%d",ld);
}