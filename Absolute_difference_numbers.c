#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,f,c,d,e,s=0,t=0,x,y;
    scanf("%d%d",&a,&b);
    x=pow(10,b);
    c=a%x;
    for(i=a;i>0;)
    {
        d=i%10;
        s=s*10+d;
        i=i/10;
    }
    y=pow(10,b);
    e=s%y;
    for(i=e;i>0;)
    {
        f=i%10;
        t=t*10+f;
        i=i/10;
    }
    if(t-c>0)
      printf("%d",t-c);
    else
      printf("%d",c-t);
    
}