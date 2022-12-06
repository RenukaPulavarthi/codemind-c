#include<stdio.h>
int main()
{
    int a,sq,b,i,s=0;
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