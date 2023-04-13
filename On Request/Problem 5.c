#include <stdio.h>

int main()
{
    int dd, mm, yy, checkLeepYear, day;


    printf("Enter date (DD-MM-YYYY format): ");
    scanf("%d-%d-%d",&dd,&mm,&yy);
    // checking date is correct
    if(dd > 31 ) {
        printf("You Enter Wrong Date Value!");
        exit(0);
    }
    // checking year is correct
    if(dd > 9999 ) {
        printf("You Enter Wrong Year Value!");
        exit(0);
    }
    // checking LeapYear
    checkLeepYear = yy%4;

    // checking date is correct for april
    if(dd>30 && mm == 4) {
        printf("You enter the wrong date!");
        exit(0);
    }
    // checking date is correct for june
    if(dd>30 && mm == 6) {
        printf("You enter the wrong date!");
        exit(0);
    }
    // checking date is correct for september
    if(dd>30 && mm == 9) {
        printf("You enter the wrong date!");
        exit(0);
    }
    // checking date is correct for november
    if(dd>30 && mm == 11) {
        printf("You enter the wrong date!");
        exit(0);
    }
    // checking date is correct for february and leapyear
    if(dd>29 && mm == 2 && checkLeepYear == 0){
        printf("You enter the wrong date!");
        exit(0);
    }
    // checking date is correct for february and leapyear
    if(dd>28 && mm == 2 && checkLeepYear > 0){
        printf("You enter the wrong date!");
        exit(0);
    }

    // calculating day of a leapyear
    if(checkLeepYear == 0) {
        if (mm == 1) {
            day = dd;
            printf("YearDay = %d",day);
        }
        else if (mm == 2) {
            day = dd + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 3) {
            day = dd + 31 + 29;
            printf("YearDay = %d",day);
        }
        else if (mm == 4) {
            day = dd + 31 + 29 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 5) {
            day = dd + 31 + 29 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else if (mm == 6) {
            day = dd + 31 + 29 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 7) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else if (mm == 8) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 9) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 10) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 +30;
            printf("YearDay = %d",day);
        }
        else if (mm == 11) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 12) {
            day = dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else {
            printf("Your Month Value is Not Right");
        }
    }

    // calculating day of a year
    else if(checkLeepYear > 0) {
        if (mm == 1) {
            day = dd;
            printf("YearDay = %d",day);
        }
        else if (mm == 2) {
            day = dd + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 3) {
            day = dd + 31 + 28;
            printf("YearDay = %d",day);
        }
        else if (mm == 4) {
            day = dd + 31 + 28 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 5) {
            day = dd + 31 + 28 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else if (mm == 6) {
            day = dd + 31 + 28 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 7) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else if (mm == 8) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 9) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 10) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 +30;
            printf("YearDay = %d",day);
        }
        else if (mm == 11) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("YearDay = %d",day);
        }
        else if (mm == 12) {
            day = dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("YearDay = %d",day);
        }
        else {
            printf("Your Month Value is Not Right");
        }
    }

    //nothing but checking error
    else {
        printf("Code Have Mistake");
    }
}
