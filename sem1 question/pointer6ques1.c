//write a program to find biggest among three numbers using pointers

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    int *p1,*p2,*p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    if(*p1>*p2&&*p1>*p3){
        printf("a is greatest");
    }else if(*p2>*p3&&*p2>*p1){
        printf("b is greatest");
    }else{
        printf("c is greatest");
    }
      
    return 0;
}
    // printf("%d\n",p1);
    // printf("%d\n",a);
    // printf("%d add\n",add);
    // printf("%u\n",&a);
    // printf("%u\n",&p1);
    // printf("%u\n",*p1);
    // printf("%u\n",*(&a));


