#include<stdio.h>
int main()
{
    int n,i,re,s,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;)
    {
        re=i%10;
        if(re%2!=0)
        {
            sum=sum*10+re;
        }
        i=i/10;
    }
    for(i=sum;i>0;)
    {
        s=i%10;
        printf("%d",s*s);
        i=i/10;
    }
}