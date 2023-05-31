#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        int c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}