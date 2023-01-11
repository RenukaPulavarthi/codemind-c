#include<stdio.h>
int pali(int n)
{
    int a,i,b,s=0;
    for(i=n;i>0;)
    {
        b=i%10;
        s=s*10+b;
        i=i/10;
    }
    if(n==s)
       return s;
    else
       return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(pali(i)==i)
          {
              printf("%d ",i);
          }
    }
}