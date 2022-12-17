#include<stdio.h>
int main()
{
    float gs,hra,pf,bs,da;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
    
    
}