#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        printf("%d",b);
        i=i/10;
    }
}