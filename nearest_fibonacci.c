#include<stdio.h>
int fib(int n)
{
    int i,a=0,b=1,c,m=0;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            m=1;
            break;
        }
        a=b;
        b=c;
    }
    if(m==1)
     return 1;
    else
      return 0;
}
int main()
{
    int i,a,c,d,e,f;
    scanf("%d",&a);
    for(i=(a+1);i>0;i++)
    {
        int x=fib(i);
        if(x==1)
        {
            c=i;
            break;
        }
    }
    for(i=(a-1);i>0;i--)
    {
        int x=fib(i);
        if(x==1)
        {
            d=i;
            break;
        }
    }
    e=c-a;
    f=a-d;
    if(e==f)
       printf("%d %d",d,c);
    else if(e>f)
      printf("%d",d);
    else
       printf("%d",c);
}