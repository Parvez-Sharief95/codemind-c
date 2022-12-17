#include<stdio.h>
int main()
{
    int s,h,mi,rs;
    scanf("%d",&s);
    h=s/3600;
    rs=s%3600;
    mi=rs/60;
    rs=s%60;
    printf("H:M:S-%d:%d:%d",h,mi,rs);
}