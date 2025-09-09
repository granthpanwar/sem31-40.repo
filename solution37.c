//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int num1,num2,lcm;
    printf("enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2 && num1%num2==0)
    {
        printf("the LCM is %.2d",num1);
    }
    else if(num2>num1 && num2%num1==0)
    {
        printf("the LCM is %.2d",num2);
    }
}