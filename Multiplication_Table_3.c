#include<stdio.h>
int main()
{
    int n,m,s,i;
    scanf("%d%d%d",&n,&m,&s);
    i=n;
    for(i=m;i<=s;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}