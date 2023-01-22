#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
      return 1;
    else
      return 0;
}
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0){
            if(prime(i)==1)
            {
                if(i==2||i==3||i==5)
                    c=1;
                else
                   break;
            }
        }
    }
    if(c==1||a==1)
        printf("Ugly Number");
    else if(c==0)
       printf("Not Ugly Number");
}