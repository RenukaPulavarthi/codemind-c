#include<stdio.h>
int sq(int n)
{
    int i,s=0,b;
    for(i=n;i>0;)
    {
        b=i%10;
        s=s+(b*b);
        i=i/10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    int x=sq(a);
    while(x>9)
    {
        x=sq(x);
        if(x>9)
        {
            x=sq(x);
            continue;
        }
        else
        {
            break;
        }
        
    }
    if(x==1||x==7)
    {
        printf("True");
    }
    else
       printf("False");
}