#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==0)
        return 1;
    else
       return 0;
}
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            int x=prime(i);
            if(x==0||i==1)
            {
                c=c+1;
            }
        }
    }
    printf("%d",c);
}