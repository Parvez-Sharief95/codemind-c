#include<stdio.h>
int main()
{
    int r,n;
    scanf("%d",&n);
    begin:
    int s1=0;
   	while(n>0)
	{
		r=n%10;
		n=n/10;
        s1+=r;
    }
    n=s1;
    if(s1<10)
    {
        printf("%d",s1);
    }
    else
    {
        goto begin;
    }
}