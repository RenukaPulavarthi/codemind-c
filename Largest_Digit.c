#include<stdio.h>
int main()
{
    int a,i,b,max;
    scanf("%d",&a);
    max=a%10;
    for(i=a;i>0;)
    {
        b=i%10;
        if(max<b)
        {
            max=b;
        }
        i=i/10;
    }
    printf("%d",max);
}