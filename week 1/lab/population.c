#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_years(int start, int end);

int main(void) {
    float startSize = 0, endSize = 0;

    do {
        startSize = get_int("Start size: ");
    } while(startSize < 9);

    do {
        endSize = get_int("End size: ");
    } while(endSize <= startSize);

    int years = get_years(startSize, endSize);

    printf("Years: %i \n", years);
}


int get_years(int start, int end) {
    float pop = 0;
    pop = start;

    int years = 0;
    while(pop < end) {
        years++;
        pop = round(pop + (pop / 3) - (pop / 4));
    }

    return years;
}
