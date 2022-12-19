#include<stdio.h>
int main()
{
    int a,i,b,c,sq,d,s=0,r=0;
    scanf("%d",&a);
    b=a*a;
    for(i=a;i>0;)
    {
        c=i%10;
        s=s*10+c;
        i=i/10;
    }
    sq=s*s;
    for(i=sq;i>0;)
    {
        d=i%10;
        r=r*10+d;
        i=i/10;
    }
    if(b==r)
      printf("True");
    else
      printf("False");
}