#include<stdio.h>
#include<unistd.h>
#include<string.h>

int Bike=0,Car=0,Rikshaw=0,Bus=0,tot_veh=0,max_veh,total_money=0;
int i=1;

struct vehicle{
    int veh_num;
    char type[10];
};

int main(){
    int type;
    int choose;
    int input;
    int rest_vehicle;

    //input total vlaue of vehicle
    printf("Enter total parking space:");
    scanf("%d",&max_veh);

    struct vehicle veh[max_veh];

    //for loop max size:
    int n=max_veh;

    //for loop for adding vehicle in record
    for(i=1;i<=n;i++){

        //for adding vehicle
        printf("\nEnter vehicle type:\n");
        printf("press (1) for Rikshaw\n");
        printf("press (2) for Car\n");
        printf("press (3) for Bus\n");
        printf("press (4) for Bike\n");
        printf("press (5) for exit to loop\n");
        scanf("%d",&type);

        switch(type){
        case 1:
        printf("Enter vehicle number:");
        scanf("%d",&veh[i].veh_num);
        Rikshaw++;
        tot_veh=tot_veh+1;
        total_money=total_money+100;
        strcpy(veh[i].type,"Rikshaw");
        printf("Add 1 Rikshaw in record\n");
        break;

        case 2:
        printf("Enter vehicle number:");
        scanf("%d",&veh[i].veh_num);
        Car++;
        tot_veh=tot_veh+1;
        total_money=total_money+200;
        strcpy(veh[i].type,"Car");
        printf("Add 1 Car in record\n");
        break;

        case 3:
        printf("Enter vehicle number:");
        scanf("%d",&veh[i].veh_num);
        Bus++;
        tot_veh=tot_veh+1;
        total_money=total_money+300;
        strcpy(veh[i].type,"Bus");
        printf("Add 1 Bus in record\n");
        break;

        case 4:
        printf("Enter vehicle number:");
        scanf("%d",&veh[i].veh_num);
        Bike++;
        tot_veh=tot_veh+1;
        total_money=total_money+400;
        strcpy(veh[i].type,"Bike");
        printf("Add 1 Bike in record\n");
        break;

        case 5:
        n=0;
        break;

        default:
        printf("invalid value\n\n");
        break;
        }

        //for vehicle number
        // printf("Enter vehicle number:");
        // scanf("%d",&veh[i].veh_num);

        if(tot_veh > max_veh){
            printf("\nNot Enogh Parking Space.\n");
        }
    }
    int condition=20;
for(int j=0;j<condition;j++){

    //choose choice
    printf("Enter your choice:\n");
    printf("1. for indivisual vehicle count.\n");
    printf("2. for total vehicle count.\n");
    printf("3. for rest vehicle.\n");
    printf("4. for total money.\n");
    printf("5. for display all vehicle details.\n");
    printf("6. for delete all records.\n");
    printf("7. for stop loop.\n");
    scanf("%d",&choose);

    switch(choose){
    case 1:
        //for indivisual vehicle count
        printf("Enter vehicle type:\n");
        printf("press (1) for Car\n");
        printf("press (2) for Bike\n");
        printf("press (3) for Bus\n");
        printf("press (4) for Rikshaw\n");
        scanf("%d",&input);

        switch(input){
        case 1:
            printf("Total Car = %d\n",Car);
            break;
        case 2:
            printf("Total Bike = %d\n",Bike);
            break;
        case 3:
            printf("Total Bus = %d\n",Bus);
            break;
        case 4:
            printf("Total Rikshaw = %d\n",Rikshaw);
            break;
        default:
            printf("please enter suitable number.");
            break;
        }
        break;
    case 2:
        //total vehicle
        printf("Total vehicle count is: %d\n",tot_veh);
        break;
    case 3:
        //display total rest vehicle space
        rest_vehicle = max_veh - tot_veh;
        printf("rest vehicle space in parking area is: %d\n",rest_vehicle);
        break;
    case 4:
        //display total money
        printf("Total money: %d\n",total_money);
        break;
    case 5:
        //display all record
        for(i=1;i<=max_veh;i++){
            printf("vehicle number: %d\n",veh[i].veh_num);
            printf("vehicle type: %s\n",veh[i].type);
            //display(veh);
        }
        printf("Total Amount = %d\n",total_money);
        printf("Total Rikshaw = %d\n",Rikshaw);
        printf("Total Car = %d\n",Car);
        printf("Total Bus = %d\n",Bus);
        printf("Total Bike = %d\n\n",Bike);
        break;
    case 6:
        Car=0;Bike=0;Bus=0;Rikshaw=0;tot_veh=0,total_money=0;
        //struture data dlt krna hai
        printf("\nDelete Record\n\n");
        break;
    case 7:
        condition=0;
        break;
    default:
        printf("Enter any choice.\n");
        break;
    }
}

    return 0;
}