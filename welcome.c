#include <stdio.h>

int main(){
    char first[100];
    /*Asking for first name*/
    printf("What's your First Name? ");
    scanf("%s", first);
    /*Asking for last name*/
    char last[100];
    printf("What's your Last Name? ");
    scanf("%s", last);
    /*Asking for age and year born*/
    int age;
    int year;
    printf("What's your age and year you were born? ");
    scanf("%d %d", &age, &year);


    printf("Welcome, %s %s\n", first, last);
    printf("You're %d years old\n", age);

    //Suming the age + year born
    
}