#include<stdio.h>
int main()
{
    int d,yr,wk;
    scanf("%d",&d);
    yr=d/365;
   int w=d%365;
    wk=w/7;
    printf("%d
%d",yr,wk);
}