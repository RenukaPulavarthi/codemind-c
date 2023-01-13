#include<stdio.h>
int even(int n)
{
    int i,c=0;
    for(i=n;i>0;)
    {
        c=c+1;
        i=i/10;
    }
   if(c%2==0)
     return 1;
   else
     return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(even(a[i])==1)
       {
           c=c+1;
       }
    }
    printf("%d",c);
}