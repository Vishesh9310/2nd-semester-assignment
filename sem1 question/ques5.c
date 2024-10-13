//write a program to sum even number between given two input values;

#include <stdio.h>
int main(){
    int a,b,i,sum=0;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);

    if(a>b){
        for (i=b; i<=a;i++)
        { if(i%2==0)
        { sum=sum+i;}
        }
    }else{
        for(i=a;i<=b;i++)
        { if(i%2==0)
        { sum=sum+i;}
        }
}
printf("\n%d",sum);
    return 0;
}

