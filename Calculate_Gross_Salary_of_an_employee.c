#include<stdio.h>
int main()
{
    float b,h,d;
    scanf("%f%f%f",&b,&h,&d);
    float p=0.12*b;
    printf("%.2f
",p);
    printf("%.2f",b+h+d+p);
}