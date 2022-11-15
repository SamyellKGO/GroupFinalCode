// GroupProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>


//defining structure to host inside array 
typedef struct planestatsinfo
{
    int p787;
    int p777;
    int p747;
    int p737;
}   P_Type;

//defining function to house and grab relevant planestats
int planestatsgrab()
{
    //array for housing plane statistics by model

    P_type* planestats_ptr;
    P_type planestats[6];

    //shows corresponding position of array by planetype
    int crew = 0;
    int pilot = 1;
    int passangers = 2;
    int costperhour = 3;
    int maxrange = 4;
    int totalcost = 5;
    
    //defining values for 787
    planestats[crew].p787 = 7;
    planestats[pilot].p787 = 2;
    planestats[passangers].p787 = 340;
    planestats[costperhour].p787 = 15000;
    planestats[maxrange].p787 = 7300;
    planestats[totalcost].p787 = 250000000;

    //defining values for 777
    planestats[crew].p777 = 9;
    planestats[pilot].p777 = 2;
    planestats[passangers].p777 = 430;
    planestats[costperhour].p777 = 30000;
    planestats[maxrange].p777 = 7300;
    planestats[totalcost].p777 = 400000000;

    //defining values for 747
    planestats[crew].p747 = 11;
    planestats[pilot].p747 = 3;
    planestats[passangers].p747 = 520;
    planestats[costperhour].p747 = 25000;
    planestats[maxrange].p747 = 7800;
    planestats[totalcost].p747 = 420000000;

    //defining values for 737
    planestats[crew].p737 = 4;
    planestats[pilot].p737 = 2;
    planestats[passangers].p737 = 200;
    planestats[costperhour].p737 = 10000;
    planestats[maxrange].p737 = 3500;
    planestats[totalcost].p737 = 120000000;
}

//struct to house inventory by type 
typedef struct inventory_by_type
{
    int p787;
    int p777;
    int p747;
    int p737;
} TYPEINVENTORY;

typedef struct airports
{
    int satx
        int losangeles[] = 1
        int[] =
};

//defining function to keep track of inventory per airport 






// main variables
int LoginNum;
int MgmtAct;
int CustAct;

int main()
{
    printf("Hello user! Which option would you like to choose?\n (1)Management \n (2)Customer \n (0)Log out");
    scanf("%d", &LoginNum);
    printf("\nUser chose option %d.", LoginNum);
    if (LoginNum = 1) {
        printf("\n Welcome Manager! What would you like to do today.");
        printf("\n (1)Invetory/location \n(2) Net Value \n(3)Profit/Losses");
        scanf("%d", MgmtAct);
        do {
            switch (MgmtAct) {
            case 1:
                printf("Would you like to look at our inventory and the location of our planes?");
                printf("\n (1)Inventory/location \n(2)Exit to actions");
                scanf("%d", inventory);
                if (inventory == 1) {
                    // print array that shows inventory/plane status
                }
                break;
            case 2:
                printf("User would like to see Net value of flights");
                    //Pull variable from booking function regarding cost per trip to calculate cost of jet fuel
                break;
            case 3:
                printf("User would like to see profit and losses");
                    //function(total profit)
                break;
            default:
            }
            while (MgmtAct > 0 && Mgmt < 5);
        }
    else if(LoginNum = 2) {
        printf("Welcome customer! What would you like to do today?");
        printf(\n (4)Booking \n(5)Cancel \n(6)Change);
        scanf("%d", CustAct);
      do{
          switch (CustAct) {
              case 4:
                  printf("\nUser would like to book.");
                  scanf(%
               break;
              case 5:
                  printf("\nUser would like to cancel.");
                  //function(cancel)
                  break;
              case 6:
                  printf("\nUser would like to change.");
                  //function(change)
                  break;
              default:
    }
        while (CustAct > 3 && CustAct < 7);

    return 0;
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu
