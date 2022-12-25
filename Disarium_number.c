#include<stdio.h>
#include<math.h>
int len(int n)
{
    int l=0;
    while(n!=0)
    {
        l=l+1;
        n=n/10;
    }
    return l;
}
int main()
{
    int a,i,b,s=0;
    scanf("%d",&a);
    int x=len(a);
    for(i=a;i>0;)
    {
        b=i%10;
        s=s+pow(b,x);
        x--;
        i=i/10;
    }
    if(a==s)
      printf("True");
    else
      printf("False");
    
}