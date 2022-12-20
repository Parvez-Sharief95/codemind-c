#include<stdio.h>
int main()
{
    int u;
    scanf("%d" ,&u);
    float bill,sr,tb;
    if(u<199)
    {
        bill=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        bill=u*1.50;
    }
    else if(u>=400 && u<600)
    {
        bill=u*1.80;
    }
    else
    {
        bill=u*2.00;
    }
    if(bill>400)
    {
        sr=bill*0.15;
        tb=sr+bill;
        printf("%0.2f" ,tb);
    }
    else
    {
        tb=bill+100;
        printf("%0.2f" ,tb);
    }
}