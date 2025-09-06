//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int a,num,temp;
    int sum=0;
    int c=0;
    printf("enter the number ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        int r=temp%10;
        c=r*r*r;
        sum = sum + c;
        temp=temp/10;
    }

    if(sum==num)
      {
         printf("the number is armstrong");
      }    
      else
      {
        printf("not an armstrong number");
      }
}