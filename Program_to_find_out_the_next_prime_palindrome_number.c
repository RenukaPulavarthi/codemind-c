#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
        
    }
    if(c==0)
       return 1;
    else
       return 0;
}
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
    int a,i;
    scanf("%d",&a);
    for(i=(a+1);i>0;i++)
    {
        int x=pali(i);
        if(x==i)
        {
            int y=prime(i);
            if(y==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
}