//error program

#include<stdio.h>
int main(){
    char a[10];
    int i,j,n;
    printf("Enter the value of a:");
    scanf("%s",&a);
    printf("Enter the size of pyramid which you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
    
}