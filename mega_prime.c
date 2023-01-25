#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==0&&n!=1)
      return 1;
    else
      return 0;
}
int main()
{
    int n,c=1,i,b;
    scanf("%d",&n);
    if(prime(n)==1)
    {
        for(i=n;i>0;)
        {
            b=i%10;
            if(prime(b)==0)
            {
                c=0;
            }
            i=i/10;
        }
    }
    else
      {
          c=0;
      }
    if(c==1)
      printf("Mega Prime");
    else
       printf("Not Mega Prime");
    
}