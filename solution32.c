// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int a,num,temp;
    int sum=0;
    printf("enter the number ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        int r=temp%10;
        sum=sum*10 + r;
        temp=temp/10;
    }
    if(sum==num)
      {
         printf("the number is palindrome");
      }    
      else
      {
        printf("not a palindrome number");
      }
}