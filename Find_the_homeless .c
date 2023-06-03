#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<=b[j])
            {
                b[j]=0;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if (b[i]!=0)
            c+=1;
    }
   printf("%d",c); 
}