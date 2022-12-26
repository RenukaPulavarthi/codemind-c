#include<stdio.h>
int sum(int n)
{
    int i,b,s=0;
    for(i=n;i>0;)
    {
        b=i%10;
        s=s+b;
        i=i/10;
    }
    return s;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    int x=sum(a);
    while(x>9)
    {
        x=sum(x);
        if(x>9)
        {
            continue;
        }
        else{
            break;
        }
    }
    printf("%d",x);
}