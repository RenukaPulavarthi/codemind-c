#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    scanf("%d",&k);
    k=n-(k%n);
    for(i=k;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}