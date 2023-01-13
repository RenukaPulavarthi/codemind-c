#include<stdio.h>
int per(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        return 1;
    else
       return 0;
}
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(per(a[i])==1||a[i]==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}