#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c=0,j,m;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            m=j%10;
            if(m==2 || m==3 || m==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}