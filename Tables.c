#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;)
    {
            printf("%d x %d = %d
",a,i,a*i);
            i=i+2;
    }
}