#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c=c+1;
        }
        else if(a[i]%2!=0)
         {
             s=s+1;
         }
    }
    printf("%d %d",c,s);
}