#include<stdio.h>
int main()
{
    int n,k,q;
    scanf("%d %d %d",&n,&k,&q);
    k=(n-k)%n;
    int i,a[n],b[n];
    int j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=k;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<k;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<q;i++)
    {
        int m;
        scanf("%d",&m);
        printf("%d
",b[m]);
    }
}