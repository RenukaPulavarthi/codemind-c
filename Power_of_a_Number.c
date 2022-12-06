#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,t;
    scanf("%d%d%d",&a,&b,&c);
    s=pow(a,b);
    t=s%c;
    printf("%d",t);
}