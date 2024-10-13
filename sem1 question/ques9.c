#include<stdio.h>
int main(){
    char a;
    float b;
    double c;
    long double d;

    printf("%d Byte\n",sizeof(a));
    printf("%d Byte\n",sizeof(b));
    printf("%d Byte\n",sizeof(c));
    printf("%d Byte\n",sizeof(d));
    return 0;
}