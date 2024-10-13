//how do you find the second largest and smallest number in array?
#include<stdio.h>

void sec_largest();
void sec_smallest();

int arr[]={12,65,42,86,13,76,32,67,21,67,15};
int arrsize=sizeof(arr)/sizeof(arr[0]);

int main(){
    int choice;

    printf("Choose choice:\n");
    printf("1. find second largest number.\n2. find second smallest number.\n");
    printf("Enter choice=");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            sec_largest();
            break;
        case 2:
            sec_smallest();
            break;
        default:
            printf("Invalid choice...");
            break;
    }

    return 0;
}

void sec_largest(){
    int i, largest, second;

    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}\n\n");

    if(arr[0] > arr[1]) {
      largest = arr[0];
      second  = arr[1];
    }else {
      largest = arr[1];
      second  = arr[0];
    }
    for(i = 2; i < arrsize; i++) {
    if( largest < arr[i] ) {
        second = largest;
        largest = arr[i];
    }else if( second < arr[i] ) {
        second =  arr[i];
      }
    }
   printf("Largest - %d \nSecond - %d \n", largest, second); 
}

void sec_smallest(){
    int i,smallest,second;

    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}\n\n");

    if(arr[0]<arr[1]){
        smallest=arr[0];
        second=arr[1];
    }else{
        smallest=arr[1];
        second=arr[0];
    }
    for(i=2;i<arrsize;i++){
        if(smallest>arr[i]){
            second=smallest;
            smallest=arr[i];
        }else if(second>arr[i]){
            second=arr[i];
        }
    }
    printf("smallest - %d \nSecond - %d \n", smallest, second); 
}

