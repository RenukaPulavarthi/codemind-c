#include<stdio.h>
void sq(int n)
{
    int i,b,c=0;
    for(i=1;i<n;i++)
    {
        b=i*i;
        if(n==b)
        {
            c=1;
            break;
        }
    }
    if(c==1)
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
        sq(a[i]);
    }
}