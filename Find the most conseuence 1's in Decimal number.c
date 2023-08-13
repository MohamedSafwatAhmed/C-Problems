#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 int x=0b1110111110111;
 int Count=0;
 int pre_Count=0;
 for(int i=0;i<32;i++)
 {
     if((x&01)==1)
     {
        pre_Count ++;
        if(pre_Count>Count)
        {
            Count=pre_Count;
        }
     }
     else
        pre_Count=0;

    x=x>>1;
 }
 printf("%d",Count);
 return 0;
}
