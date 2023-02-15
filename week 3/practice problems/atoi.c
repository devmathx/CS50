#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }
    // Convert string to int
    printf("%i\n", convert(input));
}

float base = 0;

int convert(string input)
{
    // TODO
    int len = strlen(input);
    if (len <= 0) {
        return 0;
    }

    int integer = input[len-1] - 48;
    integer = integer * pow(10.00, base);

    base++;
    input[len-1] = '\0';
    int n = convert(input);

    return integer + n;
}