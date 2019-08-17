/* To print the sum of all the Numbers which can be divided by 7 and is above 100 and less than 200*/
#include<stdio.h>
void main()
{
    int sum=0;
    for(int i=101;i<200;i++)
    {
        if(i%7==0)
        {
            sum+=i;
        }
    }
    printf("Sum=%d",sum);
}
