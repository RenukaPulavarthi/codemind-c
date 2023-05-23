#include<stdio.h>
#include<string.h>
void digi(char *ch)
{
    int i,s=0;
    for (i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]=='0' || ch[i]=='1' ||ch[i]=='2' ||
        ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9')
        {
            s+=1;
        }
        else{
            s=0;
            break;
        }
    }
    if(s!=0){
        printf("True
");
    }
    else{
        printf("False
");
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char ch[100];
        scanf("%s",ch);
        digi(ch);
    }
}