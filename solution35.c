//Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("the factors are: \n");
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%.2d \n",i);
        }
    }
    return 0;
}