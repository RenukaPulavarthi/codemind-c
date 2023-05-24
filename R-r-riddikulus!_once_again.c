#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}