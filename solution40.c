//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
 {
    unsigned int binary, complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%u", &binary);
    while (binary > 0) 
    {
        int bit = binary % 10;
        bit = (bit == 0) ? 1 : 0;
        complement += bit * place;
        binary /= 10;
        place *= 10;
    }
    printf("1's complement: %u\n", complement);
    return 0;
}