#include<stdio.h>
int main()
{
    int a,i,b,e=0,o=0;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        if(b%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
        i=i/10;
    }
    if(e==0)
      printf("Odd");
    else if(o==0)
      printf("Even");
    else
      printf("Mixed");
}