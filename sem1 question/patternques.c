#include<stdio.h>
int main(){
    int num;
    int add;
    for(int i=1;i<=5;i++){
        num=i;
        add=5;
        for(int j=i;j<=5;j++){
        //for(j=1;j<=i;j++){
            printf("%d ",num);

            num=num+ add;
            add--;
           // num += 5 - j;
        }
        printf("\n");
    }
    return 0;
}

// 1 6 10 13 15
// 2 7 11 14
// 3 8 12
// 4 9
// 5