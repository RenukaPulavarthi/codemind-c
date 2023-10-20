#include<stdio.h>
int main()
{
    int n;
    float c,b,s,t;
    scanf("%d",&n);
    if(n<199)   c=1.2;
    else if(n<400)  c=1.5;
    else if(n<600)  c=1.8;
    else    c=2;
    b=n*c;
    if(b>400)
        s=b*0.15;
    else
        s=100;
    t=b+s;
    printf("%.2f",t);
    
}