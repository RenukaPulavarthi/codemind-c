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
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i)==1&&i!=1)
        {
            printf("%d
",i);
        }
    }
}