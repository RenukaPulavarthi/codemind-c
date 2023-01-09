#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float area,peri;
    scanf("%d",&a);
    area=pow(a,2)*3.14;
    printf("%.2f",area);
    peri=2*3.14*a;
    printf("
%.2f",peri);
}