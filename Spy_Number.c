#include<stdio.h>
int main()
{
    int a,i,b,s=0,m=1;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
       b=i%10;
       s=s+b;
       m=m*b;
       i=i/10;
    }
    if(s==m)
      printf("Spy Number");
    else
      printf("Not Spy Number");
}