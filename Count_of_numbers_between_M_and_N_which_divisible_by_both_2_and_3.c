#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        if(i%2==0 && i%3==0) s++;
    }
    printf("%d",s);
}