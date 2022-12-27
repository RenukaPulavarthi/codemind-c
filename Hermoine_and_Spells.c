#include<stdio.h>
int main()
{
    int a,b,c,min,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        min=a;
    }
    else if(b<a&&b<c)
    {
        min=b;
    }
    else
      min=c;
    t=a+b+c-min;
    printf("%d",t);
}