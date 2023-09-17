#include<stdio.h>
#include<math.h>
int check(int *arr,int k,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return 1;
    }
    return 0;
}

int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=0;l<n;l++)
    {
        int s,i,j;
        int count=0;
        scanf("%d",&s);
        int arr[s];
        for(j=0;j<s;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(i=0;i<s;i++)
        {
            for(j=i+1;j<s;j++)
            {
                int k=check(arr,arr[i]+arr[j],s);
                if(k==1)
                {
                    count+=1;
                }
            }
        }
        if (count!=0)
             printf("%d
",count);
        else
            printf("-1
");
    }
}