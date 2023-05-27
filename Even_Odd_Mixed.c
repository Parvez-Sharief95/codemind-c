#include<stdio.h>
int main()
{
    int a,i,c=0,e=0,o=0,b;
    scanf("%d",&a);
    b=a;
    for(i=0;a>0;i++)
    {
        if(a>0)
        {
            c++;
            a/=10;
        }
    }
        int arr[c];
        for(i=0;i<c;i++)
        {
            arr[i]=b%10;
            b/=10;
            if(arr[i]%2==0)
                e++;
            else
                o++;
        }
        if(e==c)
            printf("Even");
        else if(o==c)
            printf("Odd");
        else
            printf("Mixed");
    
}