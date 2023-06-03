#include<stdio.h>
#include<string.h>
int main()
{
   char ch[100];
   scanf("%[^
]s",ch);
   int a[100];
   int i,c=0,max=0;
    for(i=0;ch[i]!=NULL;i++)
    {
        a[i]=ch[i];
        c+=1;
    }
    for(i=0;i<c;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("%c",max);
}