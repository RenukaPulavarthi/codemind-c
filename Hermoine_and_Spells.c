#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=0;
    int m=a<b?(a<c?a:c):(b<c?b:c);
    if(a!=m)   s+=a;
    if(b!=m)   s+=b;
    if(c!=m)    s+=c;
    printf("%d",s);
}