//write a program to enter to cartesian coordinate points and display the distance between them.

#include<stdio.h>
#include<math.h>

int main(){
    float x1,x2,y1,y2;

    printf("Enter the x1,y1 cordinate:");
    scanf("%f %f",&x1,&y1);
    printf("Enter the y1 cordinate:");
    scanf("%f %f",&x2,&y2);

    //cartesian coordinate applying here
    float p=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    float p2=sqrt(p);
    printf("the distance between cartesian coordinate points is: %0.2f",p2);
    
    return 0;
}