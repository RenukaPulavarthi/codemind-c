#include<stdio.h>
int main()
{
    int a,i,c=0,b;
    scanf("%d",&a);
    for(i=1;i<(a/2);i++)
    {
        b=i*i;
        if(a==b)
        {
            c++;
        }
    }
    if(c==0)
      printf("False");
    else
       printf("True");
}