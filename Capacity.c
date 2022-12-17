#include<stdio.h>
int main()
{
    int c,t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    c=2*t*s*b*512/1024;
    printf("%d KB",c);
}