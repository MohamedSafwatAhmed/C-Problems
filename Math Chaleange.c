#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x[5];
int num=41352;
int i=0;
int temp;
int temp_1;
while (num/10 != 0)
{

    x[i]=num%10;
    num/=10;
    i++;
}
if(i<=2)
  {
    if(x[0]>x[1])
    {
      temp=x[0];
      x[0] =x[1];
      x[1]=temp;
    }
  }
  else
  {
    if(x[1]>x[2])
    {
      temp=x[2];
      x[2]=x[1];
      x[1]=x[0];
      x[0]=temp;
    }
  }
  i-=1;
  printf("%d",num);
  for(i;i>=0;i--)
  {
    printf("%d",x[i]);
  }

return 0;
}
