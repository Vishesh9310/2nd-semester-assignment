//how to delete duplicates in an array

#include<stdio.h>
int main(){
    int arr[]={12,34,21,12,23,65,87,43,21,65,132,54,98};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    printf("size of old array:%d\n",arrsize);
    printf("old array:\n");
    printf("{");
    for(int i=0;i<arrsize;i++){
        printf("%d,",arr[i]);
    }
    printf("}");

    for(int i=0;i<arrsize;i++){
        for(int j=i+1;j<arrsize;j++){
            if(arr[i]==arr[j]){
               // delte arrary element here
                for (int k = j; k < arrsize - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }
               arrsize--;
               j--;
            }
        }
    }
    printf("\n");
    printf("size of new array:%d\n",arrsize);

    printf("New array:\n");
    printf("{");
    for(int i=0;i<arrsize;i++){
        printf("%d,",arr[i]);
    }
    printf("}");

    return 0;
}