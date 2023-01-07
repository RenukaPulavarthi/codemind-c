#include<stdio.h>
int main()
{
    int n,i,j,mul=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                mul=mul*a[j];
            }
        }
        printf("%d ",mul);
        mul=1;
     }
}