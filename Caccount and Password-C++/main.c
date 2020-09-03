#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int user_add;
char Username[20];
char Password[50];


/* Create User and Password Function*/
void accountCREAT(){
/*Create User and copy to file. */
scanf("%d", &user_add);
    if(user_add == 1){
        printf("Enter a user name: ");
        scanf("%s", &Username);
        FILE * fpointer = fopen("Users.txt", "w");
        fprintf(fpointer, "%s", Username);
        fclose(fpointer);
        printf("Created User Name " "%s \n", &Username);
    };

/* Create Password and copy to file. */
scanf("%d", &user_add);
    if(Password == 1){
        printf("Create password for " "%s \n", &Username, &Password);
        scanf("%d" "&c" "%s", &Password);
        FILE * fpointer = fopen("Passwords.txt", "w");
        fprintf(fpointer, "%s", Password);
        fclose(fpointer);
        printf("Password created");
/* clean buffer input */
        fflush(stdin);
    };

};

/* Display Users Function */
void displayUSERS(){
    char line[255];
    FILE * fpointer = fopen("Users.txt", "r"); /* Read only */
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
};

/* Main Function */
int main()
{
printf("\n");
printf("Something Something Title\n");
printf("Options:\n");
printf("1. Add a new user\n");
printf("2. Select Account\n");
printf("Please Select a option: \n");
scanf("%d",&user_add);
if (user_add==1){
    void accountCREAT();
};


return 0;
}

