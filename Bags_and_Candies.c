#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,f;
    float e;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    e=a/(float)d;
    f=ceil(e);
    printf("%d",f);
}