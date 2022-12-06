#include<stdio.h>
int main()
{
    int a,i,max,b;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    for(i=max;i>0;i++)
    {
        if(i%a==0&&i%b==0)
        {
          printf("%d",i);
          break;
        }
        
    }
}