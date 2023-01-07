#include<stdio.h>
int main()
{
    int n,t,i,am,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            c=c+1;
        }
        else if(a[i]>t)
        {
            s=s+2;
        }
    }
    am=c+s;
    printf("%d",am);
}