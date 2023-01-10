#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==i||j==1||j==a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("
");
    }
}