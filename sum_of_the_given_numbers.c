#include<stdio.h>
int main()
{
    int n,s,i,sum;
    scanf("%d",&n);
    s=n*2;
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;)
    {
        sum=a[i]+a[i+1];
        printf("%d
",sum);
        i=i+2;
    }
}