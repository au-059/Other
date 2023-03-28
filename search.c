#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Introducing an array of strings
    string strings[] = {"hello", "name", "search", "population", "llamas", "scrabble", "mario game"};

    // Getting a string from a user
    string s = get_string("String: ");
    // Checking if there is a match with the array (better not to use i < "7")
    for(int i = 0; i < 7; i++)
    {   // here we don't use strings[i] == s (as if we would if we dealt with integers, since a string is an array of characters and we need thus to check if character)
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}