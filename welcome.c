#include <stdio.h>
#include <time.h>

int main(){
    char first[100];
    /*Asking for first name*/
    printf("What's your First Name? ");
    scanf("%s", first);
    /*Asking for last name*/
    char last[100];
    printf("What's your Last Name? ");
    scanf("%s", last);
    
    /*Asking the year born*/
    int year;
    printf("What year you were born? ");
    scanf("%d", &year);

    // Calculating the year we are

    //Get the current time
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    //Extract the year
    int actual_year = localTime->tm_year + 1900;

    //Calculating your age
    int your_age = actual_year - year;


    printf("Welcome, %s %s\n", first, last);
    printf("You're %d years old\n", your_age);

}