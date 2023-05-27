#include<stdio.h>
int main()
{
    int n,i,s=0,m=1;
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
        i=n%10;//n=1124 =>4
        n=n/10;//4=>        
        s=s+i;
        m=m*i;
    }
    if(m==s)
    {
       printf("Spy Number");
    }
    else
    {
    printf("Not Spy Number");
    }
}