#include<stdio.h>
#include<unistd.h>

//int result(); //function declaration

// struct vehicle{
//     int vehiclenumber;
//     // int car;
//     // int bus;
//     // int rikshaw;
//     // int bike;
// };

int Rikshaw=0,Car=0,Bus=0,Bike=0,amount=0,total_veh=0,choice=0,condition=20,n;

int main(){
    int i;
   // struct vehicle veh[i];
    printf("Enter the maximum vehicle value:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        // printf("Enter the vehicle number:");
        // scanf("%d",&veh[i].vehiclenumber);

        printf("<< Welcome to Parking Management System >>\n\n");
        printf("press (1) for Rikshaw\n");
        printf("press (2) for Car\n");
        printf("press (3) for Bus\n");
        printf("press (4) for Bike\n");
        printf("press (5) for Show Result\n");
        printf("press (6) for Delete Record\n\n");
        printf("Enter the choice :");
        scanf("%d",&choice);
        printf("you enter select value is :%d\n",choice);

        switch(choice){

        case 1:
        Rikshaw ++;
        amount=amount+100;
        total_veh=total_veh+1;
        printf("Add 1 Rikshaw in record\n");
       // system();
        break;

        case 2:
        Car ++;
        amount=amount+200;
        total_veh++;
        printf("Add 1 Car in record\n");
       // system();
        break;

        case 3:
        Bus ++;
        amount=amount+300;
        total_veh++;
        printf("Add 1 Bus in record\n");
       // system();
        break;

        case 4:
        Bike ++;
        total_veh++;
        amount=amount+400;
        printf("Add 1 Bike in record\n");
       // system();
        break;

        case 5:
        printf("Total Amount = %d\n",amount);
        printf("Total vehicle = %d\n",total_veh);
        printf("Total Rikshaw = %d\n",Rikshaw);
        printf("Total Car = %d\n",Car);
        printf("Total Bus = %d\n",Bus);
        printf("Total Bike = %d\n\n",Bike);
       // system();
        break;

        case 6:
        Car=0; Bus=0;Rikshaw=0;amount=0;total_veh=0;
        printf("\nDelete Record\n\n");
        break;

        default:
        printf("invalid value\n\n");
       // system();
        break;
        }
    }
    if(total_veh > n){
        printf("Not Enogh Parking Space.");
    }

    printf("<< Welcome to Parking Management System >>\n\n");
        printf("press (1) for Rikshaw\n");
        printf("press (2) for Car\n");
        printf("press (3) for Bus\n");
        printf("press (4) for Bike\n");
        printf("press (5) for Show Result\n");
        printf("press (6) for Delete Record\n\n");
        printf("Enter the choice :");
        scanf("%d",&choice);
        printf("you enter select value is :%d\n",choice);

        switch(choice){

        case 1:
        Rikshaw ++;
        amount=amount+100;
        total_veh=total_veh+1;
        printf("Add 1 Rikshaw in record\n");
       // system();
        break;

        case 2:
        Car ++;
        amount=amount+200;
        total_veh++;
        printf("Add 1 Car in record\n");
       // system();
        break;

        case 3:
        Bus ++;
        amount=amount+300;
        total_veh++;
        printf("Add 1 Bus in record\n");
       // system();
        break;

        case 4:
        Bike ++;
        total_veh++;
        amount=amount+400;
        printf("Add 1 Bike in record\n");
       // system();
        break;

        case 5:
        printf("Total Amount = %d\n",amount);
        printf("Total vehicle = %d\n",total_veh);
        printf("Total Rikshaw = %d\n",Rikshaw);
        printf("Total Car = %d\n",Car);
        printf("Total Bus = %d\n",Bus);
        printf("Total Bike = %d\n\n",Bike);
       // system();
        break;

        case 6:
        Car=0; Bus=0;Rikshaw=0;amount=0;total_veh=0;
        printf("\nDelete Record\n\n");
        break;

        default:
        printf("invalid value\n\n");
       // system();
        break;
        }

    // if(total_veh <= max_veh){
    //     result();
    //    // result(max_veh);  //function call
    // }
    // else if(total_veh > max_veh){
    //     printf("Not Enogh Parking Space.");
    // }
    // else {
    //     printf("You Cross The Parking Limit.");
    // }
    
    return 0;
}

/*int result(){  //function defination
if(total_veh <= max_veh){
    for(int i=0;i<=max_veh;i++){
        printf("<< Welcome to Parking Management System >>\n\n");
        printf("press (1) for Rikshaw\n");
        printf("press (2) for Car\n");
        printf("press (3) for Bus\n");
        printf("press (4) for Bike\n");
        printf("press (5) for Show Result\n");
        printf("press (6) for Delete Record\n\n");
        printf("Enter the choice :");
        scanf("%d",&choice);
        printf("you enter select value is :%d\n",choice);

        switch(choice){

        case 1:
        Rikshaw ++;
        amount=amount+100;
        total_veh=total_veh+1;
        printf("Add 1 Rikshaw in record\n");
       // system();
        break;

        case 2:
        Car ++;
        amount=amount+200;
        total_veh++;
        printf("Add 1 Car in record\n");
       // system();
        break;

        case 3:
        Bus ++;
        amount=amount+300;
        total_veh++;
        printf("Add 1 Bus in record\n");
       // system();
        break;

        case 4:
        Bike ++;
        total_veh++;
        amount=amount+400;
        printf("Add 1 Bike in record\n");
       // system();
        break;

        case 5:
        printf("Total Amount = %d\n",amount);
        printf("Total vehicle = %d\n",total_veh);
        printf("Total Rikshaw = %d\n",Rikshaw);
        printf("Total Car = %d\n",Car);
        printf("Total Bus = %d\n",Bus);
        printf("Total Bike = %d\n\n",Bike);
       // system();
        break;

        case 6:
        Car=0; Bus=0;Rikshaw=0;amount=0;total_veh=0;
        printf("\nDelete Record\n\n");
        break;

        default:
        printf("invalid value\n\n");
       // system();
        break;
        }
    }
    }
    else if(total_veh > max_veh){
        printf("Not Enogh Parking Space.");
    }
    else {
        printf("You Cross The Parking Limit.");
    }

}*/