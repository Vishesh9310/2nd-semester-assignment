//Move all the negative elements to one side of the array.
#include <stdio.h>  
void selectionsort(int arr[], int n);  
void swap(int *, int *);  

int main()  
{  
    int i;  
    int arr[]={-12,65,42,86,-13,76,32,67,-21,67,15};
    int n=sizeof(arr)/sizeof(arr[0]);
  
    selectionsort(arr, n);  
    printf("The final Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  
void selectionsort(int arr[], int n)  
{  
    int i, j, min_in;  
    for(i = 0; i < n - 1; i++)  
    {  
        min_in = i;  
        for(j = i + 1; j < n; j++)  
        {  
            if(arr[j] < arr[min_in])  
            {  
                min_in = j;  
            }  
        }  
        swap(&arr[min_in], &arr[i]);  
    }  
}  
void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  