#include<stdio.h>
int main()
{
    int a,i,b,c,t,s=0,x=0,sq;
    scanf("%d",&a);
    sq=a*a;
    for(i=a;i>0;)
    {
        b=i%10;
        s=(s*10)+b;
        i=i/10;
    }
    t=s*s;
     for(i=t;i>0;)
    {
        c=i%10;
        x=(x*10)+c;
        i=i/10;
    }
    if(sq==x)
      printf("True");
    else
       printf("False");
    
}