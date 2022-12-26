#include<stdio.h>
int main()
{
    int a[20],i,s;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        if(a[i]!=-1)
        {
            s=a[i]*a[i];
            printf("%d
",s);
        }
        else
        {
            break;
        }
    }
}