#include<stdio.h>
int main()
{
    int n,x,i; 
    scanf("%d",&n);
    x=n/2;
    int a[x],b[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<x;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d %d ",a[i],b[i]);
    }
}