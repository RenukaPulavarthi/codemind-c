#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
          {
              s=s+i;
          }
    }
    if(a<s)
      printf("True");
    else
      printf("False");
}