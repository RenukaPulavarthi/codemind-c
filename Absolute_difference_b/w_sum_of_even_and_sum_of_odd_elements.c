#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c=c+a[i];
        }
        else if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    if(s>c)
      printf("%d",s-c);
    else
      printf("%d",c-s);
}