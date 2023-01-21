#include<stdio.h>
int fac(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==9)
       return 1;
    else
       return 0;
}
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(fac(i)==1)
        {
            printf("%d ",i);
            c=c+1;
        }
    }
    printf("
Total=%d",c);
}