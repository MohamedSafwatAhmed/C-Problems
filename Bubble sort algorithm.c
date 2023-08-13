/*********************************************************************
==============BY MOHAMED SAFWAT==============
*********************************************************************/
/*This is Bubble sort algorithm the idea of the algorithm is to move or swap the biggest number to the high index 
and repeat this with outer loop and here i use an optimize way to minimize the algorithm looping 
*/
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
void Bubble_Sort(int *arr,int length);
int main()
{
    int arr[]={64,34,25,12,22,11,90};
    Bubble_Sort(&arr,7);
    return 0;
}
void Bubble_Sort(int *arr,int length)
{
   int i,j;
   int temp;
   char swap;
   for(i=0;i<length-1;i++)
   {
       swap=false;
       for(j=0;j<length-i-1;j++)                   //Trick here after on inner for iteration the bigesset number move to the high index of array
       {                                           //so i can use that to optimize the looping by make it length-i-1,so concentrate here it's so useful
           if(*(arr+j)> *(arr+j+1))
           {
               temp = *(arr+j);
               *(arr+j)=*(arr+j+1);
               *(arr+j+1)=  temp;
               swap=true;
           }
       }
       if(swap == false)
        break;
    }
    for(i=0;i<length;i++)
    {
        printf("%d    ",*(arr+i));
    }
 }
