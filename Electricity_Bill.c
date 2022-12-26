#include<stdio.h>
int main()
{
    int a;
    float c,b,s,t;
    scanf("%d",&a);
    printf("Units Consumed: %d
",a);
    if(a<=199)
       {
           c=1.20;
           b=a*c;
       }
    else if(a>=200&&a<400)
       {
           c=1.40;
           b=a*c;
       }
    else if(a>=400&&a<600)
       {
           c=1.60;
           b=a*c;
       }
    else if(a>=600&&a<800)
       {
           c=1.80;
           b=a*c;
       }
    else
     {
         c=2.00;
         b=a*c;
     }
     printf("Cost per Unit: %.2f
",c);
     printf("Bill: %.2f
",b);
     if(a>400)
     {
         s=b*0.15;
         printf("Surcharge: %.2f
",s);
         
     }
     else
     {
         s=0;
         printf("Surcharge: %.2f
",s);
     }
     
     t=b+s;
     printf("Total Amount: %.2f",t);
}