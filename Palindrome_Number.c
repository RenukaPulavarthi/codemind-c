#include<stdio.h>
void pali(int n)
{
    int i,b,s=0;
    for(i=n;i>0;)
    {
        b=i%10;
        s=(s*10)+b;
        i=i/10;
    }
    if(n==s) 
       printf("True");
    else
       printf("False");
    printf("
");
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
        pali(a[i]);
    }
        
}