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
    /*Asking for age*/
    int age;
    printf("What's your age? ");
    scanf("%d", &age);

    printf("Welcome, %s %s\n", first, last);
    printf("You're %d years old\n", age);
}