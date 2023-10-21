#include<stdio.h>
int main()
{
    int n;
    float da,hra;
    scanf("%d",&n);
    if(n<=10000)
    {
        da=n*0.8;
        hra=n*0.2;
    }
    else if(n<=20000)
    {
        da=n*0.9;
        hra=n*0.25;
    }
    else{
        da=n*0.95;
        hra=n*0.3;
    }
    printf("%.2f",n+da+hra);
}