#include<stdio.h>
int max(int *a,int n)
{
    int i,ma=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>ma)
           ma=a[i];
    }
    return ma;
}
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int ma=max(a,n);
    for(i=0;i<n;i++)
    {
        if(a[i]+k>=ma)
            printf("True ");
        else
            printf("False ");
    }
}