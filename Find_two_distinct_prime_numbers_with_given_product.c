#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
      return 0;
    else
       return 1;
}
int main()
{
    int n,a[100],i,j,f=0;
    scanf("%d",&n);
    int m=0;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            if(prime(i))
            {
                a[m]=i;
                m++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i!=j)
            {
                if(a[i]*a[j]==n)
                {
                    f=1;
                    break;
                }
            }
        }
    }
    if (f==1)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("-1");
    }
}