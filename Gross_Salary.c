#include<stdio.h>
int main()
{
float bs,da,hra,gs;
scanf("%f",&bs);
if(bs<=10000)
{
da=bs*(80/100.00);
hra=bs*(20/100.00);
gs=bs+da+hra;
printf("%.2f",gs);
}
else if(bs<=20000)
{
da=bs*(90/100.00);
hra=bs*(25/100.00);
gs=bs+da+hra;
printf("%.2f",gs);
} 
else if(bs>20000)
{
da=bs*(95/100.00);
hra=bs*(30/100.00);
gs=bs+da+hra;
printf("%.2f",gs);
}
else
{
printf("%.2f",gs);
}
}