#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
        
    }
    if(c==0)
       return 1;
    else
       return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int x=prime(a);
    if(x==1)
       printf("Prime");
    else
       printf("Not Prime");
    
}