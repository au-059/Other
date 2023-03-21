#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("value of a whole number x: ");
    int y = get_int("value of a whole number y: ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y\n");
    }
    else
    {
        printf("x is greater than y\n");
    }
}