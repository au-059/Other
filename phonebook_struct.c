#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Define your own data type and indicate that it is a structure with multiple values inside of it:
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Two people in array "people[]" of data type "person":
    person people[2];

    people[0].name = "Alua";
    people[0].number = "+7-777-111-2233";

    people[1].name = "Cat";
    people[1].number = "+7-707-777-7070";

    string name = get_string("Name: ");
    for(int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}