#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n>999999999 and n<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}