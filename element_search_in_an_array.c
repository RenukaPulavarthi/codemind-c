#include<stdio.h>
int main()
{
    int n,i,s=0,av,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
      printf("True");
    else
      printf("False");
}