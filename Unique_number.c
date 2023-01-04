#include<stdio.h>
int main()
{
    int a,i,b,j,c=0,d,e;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        e=i/10;
        for(j=e;j>0;)
        {
            d=j%10;
            if(b==d)
            {
                c=1;
                break;
            }
            j=j/10;
        }
        i=i/10;
    }
    if(c==0)
       printf("Unique Number");
    else
       printf("Not Unique Number");
}