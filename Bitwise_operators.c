#include<stdio.h>

void displayBits(unsigned value);

int main(void)
{
    unsigned x;
    printf("\nEnter an unsigned integer: ");
    scanf("%u",&x);

    displayBits(x);

    return 0;
}

void displayBits(unsigned value)
{
    unsigned c; /*counter*/
    unsigned displayMask = 1 << 31; /*define displayMask and left shift 31 bits.*/

    printf("%10u = ",value);

    for(c=1; c<=32; c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; /*shift value left by 1*/

        if(c%8 == 0){ //outputs after 8 bits.
            putchar(' ');
        }
    }

    putchar('\n');

}
