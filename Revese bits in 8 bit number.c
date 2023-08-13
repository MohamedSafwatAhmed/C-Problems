#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0b11010010;
    x=(x&0x80>>7)|(x&0x40>>5)|(x&0x20>>3)|(x&0x10>>1)|(x&0x01<<7)|(x&0x02<<5)|(x&0x04<<3)|(x&0x08<<1);  //the output will be 0b01001011
	

    return 0;
}
