#include <iostream>
#include<stdlib.h>
#include <time.h>
#include<unistd.h>
{
    int format;
    cout << " \nChoose the time format ";
    cout << " \n1. 24 Hour format ";
    cout << " \n2. 12 Hour format (default) ";
    cout << " \nMake a choice(1 or 2) : ";
    cin >> format;
    return format;
}
void fill_time(char buffer[], int format)
{
    time_t raw_time;
    struct tm *current_time;
    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {
        strftime(buffer, 50, "%H:%M:%S", current_time);
    }
    else
    {
        strftime(buffer, 50, "%I:%M:%S %p", current_time);
    }
}