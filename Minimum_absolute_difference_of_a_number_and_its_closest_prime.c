#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
      return 1;
    else
       return 0;
}
int main()
{
    int a,i,c,d,e,f;
    scanf("%d",&a);
    if(prime(a)==1)
    {
        printf("0");
    }
    else{
    for(i=(a+1);i>0;i++)
    {
        int x=prime(i);
        if(x==1)
        {
            c=i;
            break;
        }
    }
     for(i=(a-1);i>0;i--)
    {
        int x=prime(i);
        if(x==1)
        {
            d=i;
            break;
        }
    }
    e=c-a;
    f=a-d;
    if(e>f)
    {
        printf("%d",f);
    }
    else
    {
        printf("%d",e);
    }
    }
}