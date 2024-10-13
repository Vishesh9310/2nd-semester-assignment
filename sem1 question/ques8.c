#include<stdio.h>
int main(){
    int y1,y2,y3,y4,y5,y6,y7;
    int x=2,z=4;

    y1=x++ + ++x;
    y2=++x + ++x;
    y3=++x + ++x + ++x;
    y4=x>z;
    y5=x>z?x:z;
    y6=x&z;
    y7=x>>2 + z<<1;

    printf("answer of equation a=%d\n",y1);
    printf("answer of equation b=%d\n",y2);
    printf("answer of equation c=%d\n",y3);
    printf("answer of equation d=%d\n",y4);
    printf("answer of equation e=%d\n",y5);
    printf("answer of equation f=%d\n",y6);
    printf("answer of equation g=%d\n",y7);

    return 0;
}