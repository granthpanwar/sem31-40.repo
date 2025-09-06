//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main()
 {
    int num, temp, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) 
    {
        int remainder = temp % 2;
        binary += remainder * place;
        place *= 10;
        temp /= 2;
    }
    printf("Binary representation of %d is: %d\n", num, binary);
    return 0;
}