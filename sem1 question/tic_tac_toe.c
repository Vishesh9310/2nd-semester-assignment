#include<stdio.h>

void print_layout();
char player1,player2,value;

char a[]={'0','1','2','3','4','5','6','7','8','9'};

int main(){
    print_layout();

    printf("Enter the number:");
    scanf("%c",&value);
    if(value>9){
        printf("invalid value");
    }
     /*if( value<0){
        printf{"invalid value"};
    }*/
    else{
        play(value);
    }

    return 0;
}

void print_layout(){
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",a[1],a[2],a[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",a[4],a[5],a[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",a[7],a[8],a[9]);
    printf("   |   |   \n");
}

void play(char value){
    printf("you are enter in play function");
}

