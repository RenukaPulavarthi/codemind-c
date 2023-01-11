#include<stdio.h>
void pretty(int a,int b)
{
    int s=0,c,i;
    for(i=a;i<=b;i++)
    {
        c=i%10;
        if(c==2||c==3||c==9)
        {
            s=s+1;
        }
    }
    printf("%d
",s);
}
int main()
{
    int n,m,i;
    scanf("%d",&n);
    m=n*2;
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;)
    {
        pretty(a[i],a[i+1]);
        i=i+2;
    }
}