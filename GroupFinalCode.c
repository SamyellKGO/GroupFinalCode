// GroupProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>


//defining structure to host inside array 
typedef struct planestatsinfo
{
    int crew;
    int pilot;
    int passangers;
    int costperhour;
    int maxrange;
    int totalcost;
}   STATS;

//defining function to house and grab relevant planestats
int planestatsgrab()
{
    //array for housing plane statistics by model

    STATS* planestats_ptr;
    STATS planestats[4];

    //shows corresponding position of array by planetype
    int p787 = 0;
    int p777 = 1;
    int p747 = 2;
    int p737 = 3;

    //defining values for 787
    planestats[p787].crew = 7;
    planestats[p787].pilot = 2;
    planestats[p787].passangers = 340;
    planestats[p787].costperhour = 15000;
    planestats[p787].maxrange = 7300;
    planestats[p787].totalcost = 250000000;

    //defining values for 777
    planestats[p777].crew = 9;
    planestats[p777].pilot = 2;
    planestats[p777].passangers = 430;
    planestats[p777].costperhour = 30000;
    planestats[p777].maxrange = 7300;
    planestats[p777].totalcost = 400000000;

    //defining values for 747
    planestats[p747].crew = 11;
    planestats[p747].pilot = 3;
    planestats[p747].passangers = 520;
    planestats[p747].costperhour = 25000;
    planestats[p747].maxrange = 7800;
    planestats[p747].totalcost = 420000000;

    //defining values for 737
    planestats[p737].crew = 4;
    planestats[p737].pilot = 2;
    planestats[p737].passangers = 200;
    planestats[p737].costperhour = 10000;
    planestats[p737].maxrange = 3500;
    planestats[p737].totalcost = 120000000;
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
                  //function(booking)
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
