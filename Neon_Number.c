#include<stdio.h>
int main()
{
    int a,i,sq,s=0,b;
    scanf("%d",&a);
    sq=a*a;
    for(i=sq;i>0;)
    {
        b=i%10;
        s=s+b;
        i=i/10;
    }
    if(a==s)
       printf("Neon Number");
    else
       printf("Not Neon Number");
}