#include<stdio.h>
int main()
{
    int l,b,w,c,a,l1,b1;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l1=l+w*2;
    b1=b+w*2;
    a=(l1*b1-l*b)*c;
    printf("%d",a);
}