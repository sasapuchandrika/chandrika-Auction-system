#include"bid.h"
int displayMenu()
{
int ch;
printf("\n---------------MENU-------------");
printf("\n1:Registration\
          2:Login Existing user\");
printf("\n Enter your choice: ");
scanf("%d",&ch);
return ch;
}
void login(char *username,char *pwd)
{
char username[30],pwd[30];
printf("Enter user name: ");
fgets(username,30,stdin);
printf("Enter password: ");
fgets(pwd,30,stdin);


void Authentication()
{
int ch;
printf("choose your Authentication ID:")
printf("\n1:Adhaar card\
         2:pan card\
         3:voter id\");
printf("\nenter your choice: ");
scanf("%d",&ch);
}

