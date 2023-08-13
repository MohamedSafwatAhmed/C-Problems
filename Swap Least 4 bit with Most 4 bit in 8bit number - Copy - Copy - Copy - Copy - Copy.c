#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 int b=0xCF;
 int n;
 n=b&0x0F;
 b=b>>4;
 n=n<<4;
 b=b|n;


return 0;
}
