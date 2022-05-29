#include <stdio.h>

void tach_bit(short data)
{
	unsigned char y = data ;
	unsigned char z = data >> 8;

	printf("8 bit cao: %x\r\n", z);
	printf("8 bit thap: %x", y);
}

void main()
{
	tach_bit(0xabcd);
}