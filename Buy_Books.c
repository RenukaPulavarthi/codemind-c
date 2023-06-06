#include<stdio.h>
int main()
{
    int n,c=0,s=0,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c+=a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        s+=b[i];
    }
    if(c>s)
    {
        printf("0");
    }
    else 
       printf("%d",s-c);
}