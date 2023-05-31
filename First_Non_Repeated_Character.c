#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int p,f,c=0;
        scanf("%d",&p);
        char s[p+1];   
        scanf("%s",s);
        for(int j=0;j<p;j++)
        {
            f=0;
           for(int k=0;k<p;k++)
           {
               if(j!=k)
               {
                   if(s[j]==s[k])
                   {
                       f=1;
                       break;
                   }
               }
           }
           if(f==0)
           {
               printf("%c
",s[j]);
               c++;
               break;
           }
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}