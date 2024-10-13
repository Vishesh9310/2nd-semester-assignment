#include<stdio.h>
int main(){
    int value,index;
    int arr[10]={1,2,4,2,5,3,65,3,12,65};
    printf("Enter value which you want to insert:");
    scanf("%d",&value);
    printf("Enter index number where you want to insert(index will start to 0):");
    scanf("%d",&index);
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(i==index){
            arr[i]=value;
        }
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}