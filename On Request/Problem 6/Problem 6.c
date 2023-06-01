#include <stdio.h>

main()
{
    int year, date, *pyear, *pdate;
    printf("Enter the Year: ");
    scanf("%d", &year);
    printf("\nEnter the yearDay: ");
    scanf("%d", &date);
    MonthDay(year, date, &year, &date);
}

MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{

    int isleapyear, dateis;
    isleapyear = year % 4;

    if (isleapyear == 0)
    {
        if (yearDay <= 31)
        {
            printf("month = 01 and date is %d", yearDay);
        }
        if (yearDay > 31 && yearDay <= 60)
        {
            dateis = yearDay - 31;
            printf("month = 02 and date is %d", dateis);
        }
        if (yearDay > 60 && yearDay <= 91)
        {
            dateis = yearDay - 60;
            printf("month = 03 and date is %d", dateis);
        }
        if (yearDay > 91 && yearDay <= 121)
        {
            dateis = yearDay - 91;
            printf("month = 04 and date is %d", dateis);
        }
        if (yearDay > 121 && yearDay <= 152)
        {
            dateis = yearDay - 121;
            printf("month = 05 and date is %d", dateis);
        }
        if (yearDay > 152 && yearDay <= 182)
        {
            dateis = yearDay - 152;
            printf("month = 06 and date is %d", dateis);
        }
        if (yearDay > 182 && yearDay <= 213)
        {
            dateis = yearDay - 182;
            printf("month = 07 and date is %d", dateis);
        }
        if (yearDay > 213 && yearDay <= 244)
        {
            dateis = yearDay - 213;
            printf("month = 08 and date is %d", dateis);
        }
        if (yearDay > 244 && yearDay <= 274)
        {
            dateis = yearDay - 244;
            printf("month = 09 and date is %d", dateis);
        }
        if (yearDay > 274 && yearDay <= 305)
        {
            dateis = yearDay - 274;
            printf("month = 10 and date is %d", dateis);
        }
        if (yearDay > 305 && yearDay <= 335)
        {
            dateis = yearDay - 305;
            printf("month = 11 and date is %d", dateis);
        }
        if (yearDay > 335 && yearDay <= 366)
        {
            dateis = yearDay - 335;
            printf("month = 12 and date is %d", dateis);
        }
    }
    if (isleapyear != 0)
    {
        if (yearDay <= 31)
        {
            printf("month = 01 and date is %d", yearDay);
        }
        if (yearDay > 31 && yearDay <= 59)
        {
            dateis = yearDay - 31;
            printf("month = 02 and date is %d", dateis);
        }
        if (yearDay > 59 && yearDay <= 90)
        {
            dateis = yearDay - 59;
            printf("month = 03 and date is %d", dateis);
        }
        if (yearDay > 90 && yearDay <= 120)
        {
            dateis = yearDay - 90;
            printf("month = 04 and date is %d", dateis);
        }
        if (yearDay > 120 && yearDay <= 151)
        {
            dateis = yearDay - 120;
            printf("month = 05 and date is %d", dateis);
        }
        if (yearDay > 151 && yearDay <= 181)
        {
            dateis = yearDay - 151;
            printf("month = 06 and date is %d", dateis);
        }
        if (yearDay > 181 && yearDay <= 212)
        {
            dateis = yearDay - 181;
            printf("month = 07 and date is %d", dateis);
        }
        if (yearDay > 212 && yearDay <= 243)
        {
            dateis = yearDay - 212;
            printf("month = 08 and date is %d", dateis);
        }
        if (yearDay > 243 && yearDay <= 273)
        {
            dateis = yearDay - 243;
            printf("month = 09 and date is %d", dateis);
        }
        if (yearDay > 273 && yearDay <= 304)
        {
            dateis = yearDay - 273;
            printf("month = 10 and date is %d", dateis);
        }
        if (yearDay > 304 && yearDay <= 334)
        {
            dateis = yearDay - 304;
            printf("month = 11 and date is %d", dateis);
        }
        if (yearDay > 334 && yearDay <= 365)
        {
            dateis = yearDay - 334;
            printf("month = 12 and date is %d", dateis);
        }
    }
}
