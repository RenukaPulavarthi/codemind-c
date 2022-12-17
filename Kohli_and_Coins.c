#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    if(b%5==0)
    {
        i=(b/5)+c;
        printf("%d",i);
    }
    else
      printf("-1");
    
}