//kamna bhulani School management Project

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
student: name, id, father-name, fees
fees: paid, remainning, total

function:
add student: name,id,f-name,fees(....)
add fees:add,subtract,total,paid,remainnig
update student:
*/

void addstudent();
void fees();
void allreco();

void addfees(int ids);
void subfees(int ids);
void alldetail(int ids);

int id=1;
int reamainfees=3000,totalfees=3000,paidfees=0;
char name[20],fname[20];

int main(){
    int password;
    int Password=2005;
    printf("Enter Password:");
    scanf("%d",&password);

    if(password==Password){
        int choice;
        printf("1) for add student in record.\n2) for fees of student in record.\n3) for all record.\n");
        while(1){
            printf("Enter choice:");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    addstudent();
                    break;
                case 2:
                    fees();
                    break;
                case 3:
                    allreco();
                default:
                    printf("Enter suitable choice...\n");
                    break;
            }
        }  
    }else{
        printf("Wrong Password!");
    }

    
    return 0;
}

void addstudent(){   
    printf("\nEnter Name:");
    scanf("%s",&name);
    printf("Enter Father Name:");
    scanf("%s",&fname);
    printf("\n");

    id++;
}

void fees(){
    int option;
    int idstu;
    printf("\n");
    printf("1) for add fees.\n2) for subtract fees.\n3) for all details.\n");
    printf("\nEnter fees choice:");
    scanf("%d",&option);
    printf("Enter Id:");
    scanf("%d",&idstu);
    switch(option){
        case 1:
            addfees(idstu);
            break;
        case 2:
            subfees(idstu);
            break;
        case 3:
            alldetail(idstu);
            break;
        default:
            printf("Enter suitable choice...");
            break;
    }
    printf("\n");
}

void allreco(){
    //printf all record
    for(int i=1;i<=id;i++){
        printf("%d\n",i);
        printf("Name:%s\n",name);
        printf("F-Name:%s\n",fname);
        printf("Remaining fees:%d\n",reamainfees);
        printf("Paid fees:%d\n",paidfees);
        printf("Total fees:%d\n",totalfees);
        
    }
}

void addfees(int ids){
    //write code for adding fees based on id of student;
    int addamount;
    printf("Enter amount:");
    scanf("%d",&addamount);

    reamainfees=reamainfees-addamount;
    paidfees=paidfees+addamount;
}

void subfees(int ids){
    //write code for subtracting fees based on id of student;
    int subamount;
    printf("Enter amount:");
    scanf("%d",&subamount);

    reamainfees=reamainfees+subamount;
    paidfees=paidfees-subamount;
}

void alldetail(int ids){
    //printf all details here
    printf("Remaining fees: %d\n",reamainfees);
    printf("Paid fees: %d\n",paidfees);
    printf("Total fees: %d\n",totalfees);

}