#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            m=1;
            break;
        }
        a=b;
        b=c;
    }
    if(m==1)
      printf("True");
    else
      printf("False");
}
