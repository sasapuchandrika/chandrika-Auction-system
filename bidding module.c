#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE * bidModule;
    bidModule = fopen("input.txt", "r");

    printf("Welcome to the Auction\n");
    printf("\nPlease make a selection from the following:\n");

    int number = 1;
    int starting_bid1 = 0;
    int starting_bid2 = 0;
    int starting_bid3 = 0;
    int starting_bid4 = 0;
    int starting_bid5 = 0;

    int au1_start, au1_min, au2_start, au2_min, au3_start, au3_min, au4_start, au4_min, au5_start, au5_min;
    char choice [20];

    fscanf(bidmodule, "%d %d", &au1_start, &au1_min);
    fscanf(bidmodule, "%d %d", &au2_start, &au2_min);
    fscanf(bidmodule, "%d %d", &au3_start, &au3_min);
    fscanf(bidmodule, "%d %d", &au4_start, &au4_min);
    fscanf(bidmodule, "%d %d", &au5_start, &au5_min);

    printf("\nView Auctions [VIEW]\nBid on an Auction [BID]\nClose Auctions [CLOSE]\n");
    scanf("%s", &choice);

    if (strcmp(choice, "VIEW", "view", "View") == 0) {

            printf("\nNumber    Current Bid    Minimum Increase\n");

            if (starting_bid1 < au1_start){
                printf("1  $%d $%d\n", starting_bid1, au1_start);
            }
            else{
                printf("1  $%d  $%d\n", starting_bid1, au1_min);
            }

            if (starting_bid2 < au2_start){
                printf("2  $%d  $%d\n", starting_bid2, au2_start);
            }
            else{
                printf("2  $%d   $%d\n", starting_bid2, au2_min);
            }

            if (starting_bid3 < au3_start){
                printf("3  $%d   $%d\n", starting_bid3, au3_start);
            }
            else{
                printf("3   $%d  $%d\n", starting_bid3, au3_min);
            }

            if (starting_bid4 < au4_start){
                printf("4  $%d  $%d\n", starting_bid4, au4_start);
            }
            else{
                printf("4  $%d   $%d\n", starting_bid4, au4_min);
            }

            if (starting_bid5 < au5_start){
                printf("5 $%d  $%d\n", starting_bid5, au5_start);
            }
            else{
                printf("5  $%d  $%d\n", starting_bid5, au5_min);
            }
        }

    else if (strcmp(choice, "BID", "bid", "Bid") == 0) {
            printf("\nWhich auction would you like to bid on?\n");
            scanf("%d", &number);

                switch (number) {
                    case 1:
                        printf("The minimum bid is $%d.\n", au1_start);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &starting_bid1);
                        if (starting_bid1 < au1_start){
                            printf("Sorry, that bid is not high enough.\n");
                        }
                        break;
                    case 2:
                        printf("The minimum bid is $%d.\n", au2_start);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &starting_bid2);
                        if (starting_bid2 < au2_start){
                            printf("Sorry, that bid is not high enough.\n");
                        }
                        break;
                    case 3:
                        printf("The minimum bid is $%d.\n", au3_start);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &starting_bid3);
                        if (starting_bid3 < au3_start){
                            printf("Sorry, that bid is not high enough.\n");
                        }
                        break;
                    case 4:
                        printf("The minimum bid is $%d.\n", au4_start);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &starting_bid4);
                        if (starting_bid4 < au4_start){
                            printf("Sorry, that bid is not high enough.\n");
                        }
                    case 5:
                        printf("The minimum bid is $%d.\n", au5_start);
                        printf("How much would you like to bid?");
                        scanf("%d", &starting_bid5);
                        if (starting_bid5 < au5_start){
                            printf("Sorry, that bid is not high enough.\n");
                        }
                    default:
                        printf("\n");
                }
            }
    else if (strcmp(choice, "CLOSE", "close", "Close") == 0) {
            if (starting_bid1 >= au1_start){
                printf("\nAuction 1 sold for %d.\n", starting_bid1);
            }
            else{
                printf("\nAuction 1 did not sell.\n");
            }

            if (starting_bid2 >= au2_start){
                printf("Auction 2 sold for %s.\n", starting_bid2);
            }
            else{
                printf("Auction 2 did not sell.\n");
            }

            if (starting_bid3 >= au3_start){
                printf("Auction 3 sold for %s.\n", starting_bid3);
            }
            else{
                printf("Auction 3 did not sell.\n");
            }
            if (starting_bid4 >= au4_start){
                printf("Auction 4 sold for %s.\n", starting_bid4);
            }
            else{
                printf("Auction 4 did not sell.\n");
            }

            if (starting_bid5 >= au5_start){
                printf("Auction 5 sold for %s.\n", starting_bid5);
            }
            else{
                printf("Auction 5 did not sell.\n");
            }
    }
    else{
        printf("\n choose either VIEW, BID, or CLOSE.\n");
    }

    printf("\n");

//close file
    fclose(bidmodule);


return 0;
}