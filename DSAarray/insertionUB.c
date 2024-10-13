#include<stdio.h>
int main(){
    int i,size,value;

    printf("Enter value which you want to enter:\n");
    scanf("%d",&value);

    int arr[4]={1,3,4};

    size=sizeof(arr)/sizeof(arr[0]);
    int lenght=size-1;

    for(i=0;i<size;i++){
        if(i==lenght){
            arr[i]=value;
        }else{
            arr[i]=arr[i];
        }
    }
    //arr[3]=value;

    for(i=0;i<size;i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }



    // sizearr=sizeof(arr)/sizeof(arr[0]);
    // size=sizearr;

    // for(i=0;i<)
    
    // arr[size]=value;

    // for(i=0;i<size;i++){
    //     printf("\narr[%d]=%d",i,arr[i]);
    // }

    return 0;
}