#include<stdio.h>
int main()
{
    int a,i,j,mul=1,sum=0,b;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        for(j=b;j>0;j--)
        {
            mul=mul*j;
        }
        sum=sum+mul;
        mul=1;
        i=i/10;
        
    }
    if(a==sum)
    {
        printf("The number %d is a strong number",a);
    }
    else
       printf("The number %d is not a strong number",a);
}