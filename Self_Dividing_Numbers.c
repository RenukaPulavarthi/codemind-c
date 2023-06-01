#include<stdio.h>
int self(int n)
{
    int m=n,f=0,re;
    while(m)
    {
        re=m%10;
        if(re==0 || n%re!=0)
        {
            f=1;
            break;
        }
        m=m/10;
    }
    return f==0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if (self(i))
           printf("%d ",i);
    }
}