#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int p,b,s=0,m=1;
    for(i=a;i>0;)
    {
        b=i%10;
        s=s+b;
        m=m*b;
        i=i/10;
    }
    p=m-s;
    printf("%d",p);
    
}