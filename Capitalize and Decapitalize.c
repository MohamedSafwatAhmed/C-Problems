#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str="BOB Loves-coding";
    /*******************_first character implementation_****************/
    if(*str<=90)
    {
       printf("%c",*str+32);
    }
    else
    {
      printf("%c",*str);
    }
    str++;
        /*******************_The rest of the string_****************/
    while(*str != NULL)
    {
      if(*str<=64)                         // if there's space or special character
      {
        str++;
        if(*str<=90)               //make the capital as it 
       {
         printf("%c",*str);
       }
       else
       {
        printf("%c",*str-32);   //Capatalize the lowe case char 
       }
       str++;
      continue;
      }
      /////////////
        if(*str<=90)
       {
         printf("%c",*str+32);
       }
       else
       {
        printf("%c",*str);
       }
      str++;

    }

    return 0;
}

