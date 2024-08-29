#include<stdio.h>
int main(){
    int year;
   int base_year = 1900;
    printf("enter the year");
    scanf("%d",&year);
    int total_year = (year - 1) -  base_year;
    int total_leap_year = total_year / 4;

    int total_nonleap_year = total_year - total_leap_year;
    int total_days_in_leapyear = total_leap_year * 366;
    int total_days_in_nonleapyear = (total_nonleap_year * 365)+1;
    int total_days = total_days_in_leapyear + total_days_in_nonleapyear;
    int day = total_days % 7;
    if(day == 0)
      printf("it is monday");
        else if(day == 1)
        printf("it is thusday");
            else if(day == 2)
            printf("it is wednesday");
                else if(day == 3)
                printf("it is thusday");
                    else if(day == 4)
                    printf("it is friday");
                        else if(day == 5)
                        printf("it is saturday");
                            else if(day == 6)
                                printf("it is sunday");
                                    else
                                    printf("the entered year is invalid");

}