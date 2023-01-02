#include<stdio.h>
void fac(int n)
{
    int i,mul=1;
    for(i=n;i>0;i--)
    {
      mul=mul*i;  
    }
    printf("%d
",mul);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        fac(a[i]);
    }
}