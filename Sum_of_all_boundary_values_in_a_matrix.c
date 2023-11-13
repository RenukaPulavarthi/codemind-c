#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int s=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==0 || j==0 || i==r-1 ||j==c-1)
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
}