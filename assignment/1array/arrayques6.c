/*
perform all operation on array:
1. traversing
2. insertion at given index
3. deletion at given index
4. searching
5. update
*/
#include<stdio.h>
#include<stdbool.h>

void traversing();
void insertion(int index,int value);
void deletion(int index);
void searching(int value);
void update(int index, int value);

int arr[]={12,65,42,86,13,76,32,67,21,67,15};
int arrsize=sizeof(arr)/sizeof(arr[0]);

int main(){
    int choice,index,value,data;

    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}");
    printf("\n");

    printf("Choose your choice:\n");
    printf("1: for Traversing\n2: for Insertion\n3: for Deletion\n4: for Searching\n5: Update\n");
    printf("Enter choice=");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            traversing();
            break;
        case 2:
            printf("Enter index:");
            scanf("%d",&index);
            printf("Enter value:");
            scanf("%d",&data);
            insertion(index,data);
            break;
        case 3:
            printf("Enter value:");
            scanf("%d",&value);
            deletion(value);
            break;
        case 4:
            printf("Enter value:");
            scanf("%d",&value);
            searching(value);
            break;
        case 5:
            printf("Enter index:");
            scanf("%d",&index);
            printf("Enter value:");
            scanf("%d",&value);
            update(index,value);
            break;
        default:
            printf("Enter suitable choice..."); 
    }
    return 0;
}
void traversing(){
    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}");
}

void insertion(int index, int value){
    int pos=index-1;
    arrsize=arrsize+1;
    for(int i=arrsize-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
	arr[pos] = value;
    
   
    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}");
}

void deletion(int value){
    for(int i=0;i<arrsize;i++){
        if(arr[i]==value){
            for(int j=i;j<arrsize-1;j++){
                arr[j]=arr[j+1];
            }
        }
    }

    printf("{"); 
    for(int i=0;i<arrsize-1;i++){
         printf("%d,",arr[i]); 
    }
    printf("}");
}

void searching(int value){
    bool condition=false;
    for(int i=0;i<arrsize;i++){
        if(arr[i]==value){
            printf("value is founded.\nIt's position is: %d\n",i+1);
            condition=true;
        }
    }
    if(condition==false){
    printf("value doen not exist...");
    }
}

void update(int index, int value){
    int pos=index-1;
    for(int i=0;i<arrsize;i++){
        if(i==pos){
            arr[i]=value;
        }
    }

    printf("{"); 
    for(int i=0;i<arrsize;i++){
         printf("%d,",arr[i]); 
    }
    printf("}");
}