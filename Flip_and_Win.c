#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);
    int i=0,sum=0;
    while(i<n-1)
    {
        sum+=abs(s[i+1]-(s[i]));
        i++;
    }
    sum=n-sum-1;
    if(sum%3==0)
    {
        printf("Sudhir");
    }
    else
    {
        printf("Ashok");
    }
}