//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int c=0;
    for(int i=1; i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime");
    }
}