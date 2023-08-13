#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str="mohamed Safwat";
    char *ptr;
    ptr=str;
    ptr--;
    while(*str !='\0')
    {
        str++;
    }
    str--;
    while(str != ptr)
    {
        printf("%c",*str);
        str--;
    }
   
 return 0;
}
