#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0,f=0;
        for(j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                c+=1;
                f=1;
                break;
            }
            c+=1;
        }
        if(f==1)
            printf("%d ",c);
        else
            printf("0 ");
    }
}