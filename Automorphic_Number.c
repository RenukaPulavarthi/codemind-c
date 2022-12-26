#include<stdio.h>
#include<math.h>
int len(int n)
{
    int i,b=0;
    while(n!=0)
    {
        b=b+1;
        n=n/10;
    }
    return b;
}
int main()
{
    int a,sq,d,e;
    scanf("%d",&a);
    sq=a*a;
    d=pow(10,(len(a)));
    e=sq%d;
    if(e==a)
      printf("Automorphic Number");
    else
      printf("Not an Automorphic Number");
}