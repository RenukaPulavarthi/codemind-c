#include<stdio.h>
int count(int *a,int k,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    return c;
}
bool pre(int *a,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
           return false;
    }
    return true;
}
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==count(a,a[i],n))
        {
            b[k]=a[i];
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else{
        float s=0,m=0;
        for(i=0;i<k;i++)
        {
            if(pre(b,i,b[i]))
            {
                s+=b[i];
                m+=1.0;
            }
        }
        printf("%.2f",s/m);
    }
}
