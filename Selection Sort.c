#include <stdio.h>
#include <stdlib.h>
/***********************************************
==========By Mohamed Safwat=================
***********************************************/
/*
//This code is for Selection sort algorithm with O(n^2) Complexity
the functon depond on getting the minumum value of array at index 0 and then 1
and so on till the end of the array,
The algorithms is easy to implement and less memory consumbtion but it has some disadvantages
like time of excution and it blind if the rest of the array are sorted it act the process in this part
*/
void selection_Sort(int *arr,int lengh);
int main()
{
int arr[10]={10,12,17,2,4,8,12,15,13,1}; // 2,12,17,10,4,8,12,15,13,1
selection_Sort(&arr,10);
return 0;
}
void selection_Sort(int *arr,int lengh)
{
int i,j;
int temp;
int minumum=0;
for(i=0;i<lengh;i++)
{
    minumum=arr[i];
    for(j=i+1;j<lengh;j++)
    {
        if(minumum>arr[j])
        {
            temp=arr[j];
            arr[j]=minumum;
            arr[i]=temp;
            minumum=temp;
        }
    }
}
for(i=0;i<lengh;i++)
    printf("%d  ",arr[i]);
}
  /*  int x=0x20CF50FF; //it is little endian storage we want to convert to big Endian
     x=((x&0x000000FF)<<24)|((x&0x0000FF00)<<8)|((x&0xFF000000)>>24)|((x&0x00FF0000)>>8);
     */
