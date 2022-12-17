#include<stdio.h>
int main()
{
    int mi,hr,m;
    scanf("%d",&mi);
    hr=mi/60;
    m=mi%60;
    printf("%d Hour(s) %d Minute(s)",hr,m);
}