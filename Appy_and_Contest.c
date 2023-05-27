#include<stdio.h>
void app(int a,int b,int c,int d)
{
    int i,k=0;
    for(i=1;i<=a;i++)
    {
        if(i%b==0 && i%c!=0)
                k+=1;
        else if(i%c==0 && i%b!=0)
                k+=1;
    }
    if(k>=d)
      printf("Win
");
    else
      printf("Lose
");
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        app(a,b,c,d);
    }
}