/* José Pereira - ist1103252 */
#include "proj1.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    airport airports[AIRPORT_MAX] = {0};
    /* execute program until the user sends the 'q' command */
    while (handle_command(airports))
    {
    }

    return 0;
}

/**
 * Handles command input.
 * Returns 1 if the program should continue after running the command.
 * Otherwise, returns 0.
 */
int handle_command(airport airports[])
{
    char command = getchar();
    switch (command)
    {
    case 'a':
        handle_add_airport_command(airports);
        return 1;
    case 'l':
        /* handle_list_airports_command(); */
        return 1;
    case 'v':
        /* handle_add_flight_command(); */
        return 1;
    case 'p':
        /* handle_list_flight_departure_command(); */
        return 1;
    case 'c':
        /* handle_list_flight_arrival_command(); */
        return 1;
    case 't':
        /* handle_forward_date_command(); */
        return 1;
    case 'q':
        /* stop the program */
        return 0;
    default:
        /* ignore undefined commands */
        return 1;
    }
}

/**
 * Handles the 'a' command.
 * Adds to the system a new airport with the specified identity, country and
 * city.
 */
void handle_add_airport_command(airport airports[])
{
    char identity[ID_LENGTH], country[COUNTRY_LENGTH], city[CITY_LENGTH];
    airport airport;
    scanf("%s %s %s", identity, country, city);
    strcpy(airport.identity, identity);
    strcpy(airport.country, country);
    strcpy(airport.city, city);
    airports[0] = airport;
    printf("airport %s\n", airport.identity);
}