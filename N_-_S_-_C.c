#include<stdio.h>
int main()
{
    int a,b,i,s,c;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        s=i*i;
        c=i*i*i;
         printf("%d %d %d
",i,s,c);
    }
   
}