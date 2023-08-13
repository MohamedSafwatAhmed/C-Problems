#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(int *Arr,int index);
int main()
{
    int arr[10]={1,5,7,8,9,6,2,4,7,5};
    reverse(&arr,10);
    for(int n=0;n<10;n++)
        printf("  %d",arr[n]);

 return 0;
}
void reverse(int *Arr,int index)
{
    int temp;
    for(int i=0;i<index/2;i++)
    {
        temp=*(Arr+i);
        *(Arr+i)=*(Arr+index-1-i);
        *(Arr+index-1-i)=temp;
    }
}
