#include<stdio.h>
int main()
{
    int n,i;
    float avg,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        avg=s/n;
    }
    printf("%.2f",avg);
}
