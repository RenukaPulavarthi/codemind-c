#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
      return 0;
    else
       return 1;
}
int main()
{
    int a,b,n,i,t;
    scanf("%d%d",&a,&b);
    n=a+b;
    for(i=(n+1);i>0;i++)
    {
        if(prime(i)==1)
        {
            t=i-n;
            printf("%d",t);
            break;
        }
    }
}