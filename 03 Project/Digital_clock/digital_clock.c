#include <stdio.h>
#include <time.h>    // time use kar karne ke kiye 
#include <unistd.h>  // system function use karne ke liye 
#include <stdlib.h>  // sleep kar karne ke liye 

void fill_time(char *, int);
void fill_date(char *);
int input_format();
void clear_screen();

int main()
{
    char time[100], date[100];
    int format = input_format();

    while (1)
    {
        fill_time(time, format);
        fill_date(date);
        clear_screen();
        printf("Current Time = %s\n", time);
        printf("Current Date = %s\n\n", date);
        sleep(1); // sleep for 1 second
    }
    return 0;
}
void clear_screen()  // screen clear function  
{
#ifdef _WIN32
    system("cls");

#else
    system("clear");

#endif
}

int input_format()  // menu bar type banaya hai jo ki user se input lega  
{
    int format;
    printf("Choose the time format\n");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (default)");
    printf("\nMake a Chioce (1/2)");
    scanf("%d", format);

    return format;
}

void fill_date(char *show_time)  // current time dekha ne ke liye function 
{

    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(show_time, 100, "%A %B %d %Y ", current_time);
}

void fill_time(char *show_time, int format) //current time dekha ne ke liye function 
{

    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {
        strftime(show_time, 100, "%H:%M:%S ", current_time);
    }
    else
    {
        strftime(show_time, 100, "%I:%M:%S %p", current_time);
    }
}