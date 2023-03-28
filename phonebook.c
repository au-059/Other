#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Alua", "Cat"};
    string numbers[] = {"+7-777-111-2233", "+7-707-777-7070"};

    string name = get_string("Name: ");
    for(int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number found: %s\n", numbers[i]);
            return 0;
        }
    // However, the code is poorly designed as various problems might arise (for instance, if you add a name but don't add a corresponding number, or screw up with orders)
    }
    printf("Not found\n");
    return 1;
}