#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <conio.h>
int main (void)
{
   int arr[10]={2,4,8,5,4,8,8,1,10,17};
   int size =10;
   for(int i=0;i<size-1;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(arr[i]==arr[j])
           {
               for(int n=j;n<size;n++)
               {
                   arr[n]=arr[n+1];
               }
               size --;
               j-=1;  //important if the two number consitive in the ordere
           }
       }
   }

   for(int p=0;p<size;p++)
      printf("  %d",arr[p]);
  return 0;
}
