#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,c=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c+=1;
            if(a[i]%2==0)
            {
                s+=1;
            }
        }
    }
    if (s==c)
    {
        printf("True");
    }
    else
      printf("False");
}