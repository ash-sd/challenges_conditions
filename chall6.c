#include <stdio.h>


int main()

{

    int choice;
    int years;
    int month, day, hour, min, sec;

    printf("Choose from 1 - 5:\n\n");
    printf("1-Convert the value of years to month:\n");
    printf("2-Convert the value of years to days:\n");
    printf("3-Convert the value of years to hours:\n");
    printf("4-Convert the value of years to minutes:\n");
    printf("5-Convert the value of years to seconds:\n");

    scanf("%d",&choice);




    switch (choice){

    case 1: {

    printf("Enter the value in years:\n");
    scanf("%d",&years);
    month = years*12;
    printf("The value in months is: %d", month);
    break;
    }

    case 2: {

    printf("Enter the value in years:\n");
    scanf("%d",&years);
    day = years*365;
    printf("The value in days is: %d", day);
    break;
    }

    case 3: {

    printf("Enter the value in years:\n");
    scanf("%d",&years);
    hour = years*8760;
    printf("The value in hours is: %d", hour);
    break;
    }

    case 4: {

    printf("Enter the value in years:\n");
    scanf("%d",&years);
    min = years*525600;
    printf("The value in minutes is: %d", min);
    break;
    }

    case 5: {

    printf("Enter the value in years:\n");
    scanf("%d",&years);
    sec = years*31556952;
    printf("The value in seconds is: %d", sec);
    break;


    }

    return 0;

    }


}
