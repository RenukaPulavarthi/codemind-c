#include<stdio.h>
int main()
{
    int n,i,s=0,c=0,av;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=av)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}