//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int num;
    int product=1;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num != 0)
    {
        int r = num % 10;
        if(r%2==1)
        {
           product = product*r; 
        }
        num = num / 10;
    } 
    printf("the sum of digits is : %.d",product);
}