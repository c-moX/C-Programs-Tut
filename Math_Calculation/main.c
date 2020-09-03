//User Input And Calculation Structure:
#include <stdio.h>
int main(){
    int i, j, jor = 0, bijor = 0;

    printf("Enter your number of value: \n");
    scanf("%d", &j);
    printf("\n");

    if(j == 0 || j == 1){
        printf("Number of Wrong!\n");
        printf("Please enter the correct value!\n");
    }else{
// Bijor Songkha:
    printf("Number of bijor: \n");
    for(i = 1; i <= j; i = i + 2){
        printf("%d ", i);
        bijor = bijor + i;
    }
    printf("\n");
    printf("Summation of bijor: %d\n", bijor);
    printf("******************************\n\n");

// Jor Songkha:
    printf("Number of jor: \n");
    for(i = 2; i <= j; i = i + 2){
        printf("%d ", i);
        jor = jor + i;
    }
    printf("\n");
    printf("Summation of jor: %d\n", jor);
    printf("******************************\n\n");

    printf("Total: %d\n\n", (bijor + jor));

    }


    return 0;
}
