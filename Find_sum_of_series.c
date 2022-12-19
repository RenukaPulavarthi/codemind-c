#include<stdio.h>
int main()
{
    int a,i;
    float s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+(1.0/i);
    }
    printf("%.2f",s);
}