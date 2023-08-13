#include <stdio.h>
#include <stdlib.h>
void merge(int *arr_1,int *arr_2,int lenght);
int main()
{
    int i;
    int arr_1[5]={1,2,3,4,5};
    int arr_2[5]={6,7,2,-1,10};
    merge(&arr_1,&arr_2,5);
    for( i=0;i<10;i++)
        printf("%d\n",*(arr_1+i));
    return 0;
}
void merge(int *arr_1,int *arr_2,int lenght)
{
    int lenght_2=lenght *2;
    int i;
    for(i=lenght;i<lenght_2;i++)
    {
        *(arr_1+i)=*(arr_2+(i-lenght));
     }
}
