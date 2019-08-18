/* To find the values in linear equation */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,d,m,n;
    float x1=0.0,x2=0.0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    printf("\nEnter c:");
    scanf("%d",&c);
    printf("\nEnter d:");
    scanf("%d",&d);
    printf("\nEnter m:");
    scanf("%d",&m);
    printf("\nEnter n:");
    scanf("%d",&n);
    if((a*d-c*b)==0)
    {
        printf("Denominator is Zero");
        exit(0);
    }
    else
    {
        x1=(m*d-b*n)/(a*d-c*b);
        x2=(n*a-m*c)/(a*d-c*b);
    }
    printf("\nX1=%f",x1);
    printf("\nX2=%f",x2);
}
    
