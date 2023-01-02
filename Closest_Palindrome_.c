#include<stdio.h>
int pali(int n)
{
    int a,i,b,s=0;
    for(i=n;i>0;)
    {
        b=i%10;
        s=s*10+b;
        i=i/10;
    }
    if(n==s)
       return s;
    else
       return 0;
}
int main()
{
   int a,i,c,d,e,f;
   scanf("%d",&a);
   for(i=(a+1);i>0;i++)
   {
       int x=pali(i);
       if(x!=0)
       {
         c=i;
         break;
        }
   }
   for(i=(a-1);i>0;i--)
   {
       int x=pali(i);
       if(x>0)
       {
         d=i;
         break;
        }
   }
   e=c-a;
   f=a-d;
   if(e==f)
     printf("%d %d",d,c);
    else if(e>f)
       printf("%d",d);
    else if(e<f)
       printf("%d",c);
   
}